%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <ctype.h>
	#include <stdarg.h>
	#include "header.h"
    #define LIMIT 1024
    #define MAX_MEMBER 10			// max number of member in struct
	#define TYPE_LENGTH 6			// length of type int float void ....
	#define MAX_NO_OF_STRUCT 20		// max_no of structure 
	void yyerror(const char*);
	int yylex();
	
	/* prototypes */
	int ex (nodeType *p, int flag);
	/* function prototype to create a node for an operation */ 
	nodeType *opr(int oper, int nops, ...);
	/* function prototype to create a node for an identifier */
	nodeType *id(char *identifier);
	/* function prototype to create a node for a constat */
	nodeType *con(char *value);

    int find_struct_variable(char *identifier);
    nodeType *opr_struct(int oper, int num);
	int if_assign = 1;
    int struct_num =0; // initial number of structures
    char struct_members[1024];
    struct struct_data{
		char struct_name[LIMIT];
		char member_name[MAX_MEMBER][LIMIT];
		int index_to_insert_member;				// to know at which index do we have to insert new member
	}struct_variable[MAX_NO_OF_STRUCT];

%}

%union
{
	int ival;
	nodeType *nPtr;
	char string[128];
}
%token PREPROC  STDIO  MATH STRING 

%token	IDENTIFIER INTEGER_LITERAL FLOAT_LITERAL STRING_LITERAL HEADER_LITERAL CHARACTER_LITERAL

%token	INC_OP DEC_OP LE_OP GE_OP EQ_OP NE_OP LT GT 

%token  AND_LOG OR_LOG NOT

%token	ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN  

%token	CHAR INT FLOAT VOID MAIN BREAK SWITCH CASE DEFAULT RETURN

%token  SUB ADD MUL DIV MOD

%token	STRUCT

%token	WHILE 


%type <string> IDENTIFIER INTEGER_LITERAL FLOAT_LITERAL STRING_LITERAL HEADER_LITERAL CHARACTER_LITERAL array BREAK

%type <nPtr> primary_expression postfix_expression multiplicative_expression 

%type <nPtr> unary_expression additive_expression relational_expression

%type <nPtr> equality_expression conditional_expression assignment_expression switch_statement

%type <nPtr> statement compound_statement expression_statement block_item while_statement

%type <nPtr> expression init_declarator init_declarator_list 

%type <nPtr>  block_item_list translation_unit case_statement case_statement_int

%type <nPtr> external_declaration declaration logical_and_expression logical_or_expression 

%type <nPtr>  struct_declaration_list struct_declaration struct_declarator_list struct_declarator struct_specifier specifier_qualifier_list type_specifier



%start translation_unit

%%
headers
	: PREPROC HEADER_LITERAL 		
	| PREPROC LT libraries GT	
	;

libraries
	: STDIO		
	| MATH		
	| STRING	
	;

primary_expression
	: IDENTIFIER		{$$ = id($1);}
	| INTEGER_LITERAL	{$$ = con($1);}
	| CHARACTER_LITERAL	{$$ = con($1);}
	| FLOAT_LITERAL		{$$ = con($1);}
	| STRING_LITERAL	{$$ = con($1);}
	| '(' expression ')'	{$$ = $2;}
	;

postfix_expression
	: primary_expression	{$$ = $1;}
	| postfix_expression '(' ')'
	| postfix_expression '[' expression ']' {
                                                $$ = opr('#',2,$1,$3);
                                            }
	| postfix_expression '.' IDENTIFIER {
											char *tmp = strcat($1->id.name,".");
											tmp = strcat(tmp, $3);		
											$$ = id(tmp);
										}
	| postfix_expression INC_OP			{
											$$ = opr('=', 2, $1, opr('+', 2, $1, con("1") ) );
										}
	| postfix_expression DEC_OP			{
											$$ = opr('=', 2, $1, opr('-', 2, $1, con("1") ) );										
										}
	| INC_OP primary_expression			{
											$$ = opr('=', 2, $2, opr('+', 2, $2, con("1") ) );										
										}
	| DEC_OP primary_expression			{
											$$ = opr('=', 2, $2, opr('-', 2, $2, con("1") ) );										
										}

	;

unary_expression
	: postfix_expression 			{$$ = $1;}
	| unary_operator unary_expression			{$$ = opr('!', 1, $2);}
	;

unary_operator
	: NOT		
	;

multiplicative_expression
	: unary_expression						{$$ = $1;}
	| multiplicative_expression MUL unary_expression		{$$ = opr('*', 2, $1, $3);}
	| multiplicative_expression DIV unary_expression		{$$ = opr('/', 2, $1, $3);}		
	| multiplicative_expression MOD unary_expression		{$$ = opr('%', 2, $1, $3);}
	;

additive_expression
	: multiplicative_expression					{$$ = $1;}
	| additive_expression ADD multiplicative_expression		{$$ = opr('+', 2, $1, $3);}
	| additive_expression SUB multiplicative_expression		{$$ = opr('-', 2, $1, $3);}
	;

relational_expression
	: additive_expression
	| relational_expression LT additive_expression			{$$ = opr('<', 2, $1, $3);}
	| relational_expression GT additive_expression			{$$ = opr('>', 2, $1, $3);}
	| relational_expression LE_OP additive_expression		{$$ = opr(LE_OP, 2, $1, $3);}
	| relational_expression GE_OP additive_expression		{$$ = opr(GE_OP, 2, $1, $3);}
	;

equality_expression
	: relational_expression						{$$ = $1;}
	| equality_expression EQ_OP relational_expression 		{$$ = opr(EQ_OP, 2, $1, $3);}
	| equality_expression NE_OP relational_expression		{$$ = opr(NE_OP, 2, $1, $3);}
	;

logical_and_expression
	: equality_expression								{$$ = $1;}
	| logical_and_expression AND_LOG equality_expression{$$=opr(AND_LOG,2,$1,$3);}
	;

logical_or_expression
	: logical_and_expression							{$$ = $1;}
	| logical_or_expression OR_LOG logical_and_expression{$$=opr(OR_LOG,2,$1,$3);}
	;

conditional_expression
	: logical_or_expression 						{$$ = $1;}
	| logical_or_expression  '?' expression ':' conditional_expression	{$$ = opr('?', 2, $1, opr(':', 2, $3, $5) );}
	;
assignment_expression
	: conditional_expression					{$$ = $1;}
	| unary_expression '=' assignment_expression {$$ = opr('=', 2, $1, $3);}
	| unary_expression ADD_ASSIGN assignment_expression {$$ = opr('=', 2, $1, opr('+', 2, $1, $3) );}
	| unary_expression SUB_ASSIGN assignment_expression {$$ = opr('=', 2, $1, opr('-', 2, $1, $3) );}
	;


expression
	: assignment_expression						{$$ = $1;}
	| expression ',' assignment_expression		{$$=opr(',',2,$1,$3);}
	;


declaration
	: type_specifier ';'								
	| type_specifier init_declarator_list ';'			{if(if_assign==0){$$ = opr('STRUCT', 2,$2,$1);} else{$$ = opr('DEC', 1, $2);} }
	;

init_declarator_list
	: init_declarator									{$$ = $1;}
	| init_declarator_list ',' init_declarator			{$$ = opr(',', 2, $1, $3);}
	;

init_declarator
	: IDENTIFIER '=' assignment_expression 				{$$ = opr('=', 2, id($1), $3);}
	| IDENTIFIER										{$$ = id($1);}
	| IDENTIFIER array 									{  char buff[50];
                                                            strcpy(buff,$1);
                                                            strcat(buff,"(");
                                                            strcat(buff,$2);
                                                            buff[strlen(buff)-1]=')';
                                                            buff[strlen(buff)]='\0';
                                                            $$ = id(buff); 
                                                        }
	;


array
: '['INTEGER_LITERAL']' array					{
                                                    char buff[50];
                                                   strcpy(buff, $2);
                                                    strcat(buff,",");   
                                                    strcat(buff,$4);
                                                    strcpy($$,buff);               
                                                }
| '['INTEGER_LITERAL']'							{       char buff[50];
                                                        strcpy(buff, $2);
                                                        strcat(buff,",");
                                                       strcpy($$,buff);
                                                }
;


type_specifier
	: VOID 	{if_assign = 1;}				
	| CHAR 	{if_assign = 1;}				
	| INT 	{if_assign = 1;}				
	| FLOAT		{if_assign = 1;}			
	| struct_specifier	{if_assign = 0; $$=$1;}
	;

struct_specifier
	: STRUCT '{' struct_declaration_list '}'
	| STRUCT IDENTIFIER '{'  struct_declaration_list '}'                        {  
                                                                                    $$=$4;
                                                                                    // initializing its values into structure;
                                                                                    strcpy(struct_variable[struct_num].struct_name,$2);
                                                                                    struct_variable[struct_num].index_to_insert_member=0;
                                                                                    char *token;  
                                                                                        token = strtok(struct_members, "#");
                                                                                        
                                                                                        while( token != NULL )
                                                                                         {
                                                                                            strcpy(struct_variable[struct_num].member_name[struct_variable[struct_num].index_to_insert_member],token);
                                                                                            struct_variable[struct_num].index_to_insert_member++;
                                                                                            token = strtok(NULL, "#");
                                                                                        }
                                                                                    /*printf("INFO ON STRUCTURE VARIABLES!!\n\n\n");
                                                                                    for(int i =0;i<struct_variable[struct_num].index_to_insert_member;i++)
                                                                                    {
                                                                                        printf("STRUCTURE NAME %s    MEMBER NAME %s    MEMBER NO :   %d      \n\n\n",struct_variable[struct_num].struct_name,struct_variable[struct_num].member_name[i],struct_variable[struct_num].index_to_insert_member);
                                                                                    }*/
                                                                                    strcpy(struct_members,"\0");
                                                                                    struct_num++;
                                                                                }
	| STRUCT IDENTIFIER                                                         {
                                                                                    int num = find_struct_variable($2);
                                                                                    $$ = opr_struct('STRUCT_MEM',num);

                                                                                }
	;

struct_declaration_list
	: struct_declaration  {$$=$1;}
	| struct_declaration_list struct_declaration  {$$ =  opr('STRUCT_MEM', 2, $1, $2);}
	;

struct_declaration
	: specifier_qualifier_list ';'	/* for anonymous struct/union */
	| specifier_qualifier_list struct_declarator_list ';' { if(if_assign==0){$$ = opr(';', 2,$1, $2);} else {$$ = $2;}}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier 									{ if(if_assign==0){$$=$1;}}
	;

struct_declarator_list
	: struct_declarator {  $$ = $1;}
	| struct_declarator_list ',' struct_declarator { $$ = opr(',',2, $1, $3);}
	;

struct_declarator
	: IDENTIFIER	                                        {    $$ = id($1);      
                                                                strcat(struct_members,$1); 
                                                                strcat(struct_members,"#");    

                                                            }
	| IDENTIFIER array                                    { char buff[50];
                                                            strcpy(buff,$1);
                                                            strcat(buff,"(");
                                                            strcat(buff,$2);
                                                            buff[strlen(buff)-1]=')';
                                                            buff[strlen(buff)]='\0';
                                                            $$ = id(buff); 
                                                            strcat(struct_members,buff); 
                                                            strcat(struct_members,"#"); 
                                                            }
	;

statement
	: compound_statement	{$$ = $1;}
	| expression_statement	{$$ = $1;}
	| while_statement	{$$ = $1;}
	| switch_statement	{$$ = $1;}
	| BREAK ';' {/*$$=opr(BREAK,1,$1);*/$$=id($1);}
	;
	
switch_statement
: SWITCH '(' expression ')' '{' case_statement '}' {$$=opr(SWITCH,2,$3,$6);}
;
case_statement
: case_statement_int {$$=$1;}
| case_statement case_statement_int {$$ = opr('CASES', 2, $1, $2);}
;

case_statement_int
: CASE conditional_expression ':' block_item_list{$$=opr(CASE,2,$2,$4);}
| DEFAULT ':' block_item_list {$$=opr(DEFAULT,1,$3);}
;

compound_statement
	: '{' '}'
	| '{' block_item_list '}'	{$$ = $2;}
	;

block_item_list
	: block_item	{$$ = $1;}
	| block_item_list block_item {$$ = opr(';', 2, $1, $2);}
	;

block_item
	: declaration	{$$ = $1;}
	| statement		{$$ = $1;}
	;

expression_statement
	: ';'			
	| expression ';' {$$ = $1;}
	;

while_statement
	: WHILE '(' expression ')' '{' block_item_list '}' {$$ = opr(WHILE, 2, $3, $6);}
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration 	;

external_declaration
	: INT MAIN '(' ')' compound_statement	{ex($5, 0); /*freeNode($2);*/}
	| declaration							{
												//if(if_assign)
												{											
													ex($1, 2); /*freeNode($2);*/
												}
											}	
	| headers 	
	;

%%

void yyerror(const char *str)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", str);
}

int main(){
    strcpy(struct_members,"\0");
	if(!yyparse())
	{
		printf("Successful\n");
	}
	else
		printf("Unsuccessful\n");

	return 0;
}

nodeType *con(char *value)
{
	nodeType *p;
	/* allocate node */
	if ((p = malloc(sizeof(nodeType))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeCon;
	strcpy(p->con.value, value);
	//printf("in con %s\n",value);
	return p;
}
nodeType *id(char *identifier) {
	nodeType *p;
	/* allocate node */
	if ((p = malloc(sizeof(nodeType))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeId;
	strcpy(p->id.name,identifier);
	//printf("The copied identifier %s\n", p->id.name);
	return p;
}

nodeType *opr(int oper, int nops, ...)
{
	va_list ap;
	nodeType *p;
	int i;
	/* allocate node, extending op array */
	if ((p = malloc(sizeof(nodeType) +(nops-1) * sizeof(nodeType *))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeOpr;
	p->opr.oper = oper;
	p->opr.nops = nops;
	va_start(ap, nops);
	for (i = 0; i < nops; i++)
	{
		p->opr.op[i] = va_arg(ap, nodeType*);
		//printf("in opr %d  i   %d\n",oper,i);
	}
	va_end(ap);
	return p;
}

nodeType *opr_struct(int oper, int num)
{
	//va_list ap;
	nodeType *p;
	int i;
	/* allocate node, extending op array */
	if ((p = malloc(sizeof(nodeType) +(struct_variable[num].index_to_insert_member-1) * sizeof(nodeType *))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeOpr;
	p->opr.oper = oper;
	p->opr.nops = struct_variable[num].index_to_insert_member;
	//va_start(ap, nops);
	for (i = 0; i < struct_variable[num].index_to_insert_member; i++)
	{
		p->opr.op[i] = id(struct_variable[num].member_name[i]);
		//printf("in opr %d  i   %d\n",oper,i);
	}
	//va_end(ap);
	return p;
}

int find_struct_variable(char *identifier)
{
    for(int i=0;i<struct_num;i++)
    {
        if(!strcmp(struct_variable[i].struct_name,identifier))
        {
            return i;
        }
    }
}
