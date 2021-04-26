%{
#include"header.h"
#include <stdio.h>
#include "y.tab.h"
#include<string.h>


//#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno;

extern void yyerror(const char *);  /* prints grammar violation message */

extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

static void comment(void);

static int check_type(void);

int line = 0;

%}

%option yylineno

DIGIT   [0-9]
LETTER   [a-zA-Z_]
ALL   [a-zA-Z_0-9]
WS   [ \t\v\n\f]
CHARACTER \'[^\']\'
STRING \"[^\"]*\"


%%
        /* Unary operators */
"++" { return(INC_OP); }
"--" { return(DEC_OP); }

"/*" { comment(); }
"//"[^\n]* { /* Consume Comment */ }

        /* Data Types */
int { strcpy(yylval.string,yytext); return(INT); }
float { strcpy(yylval.string,yytext); return(FLOAT); }
char { strcpy(yylval.string,yytext); return(CHAR); }
void { strcpy(yylval.string,yytext); return(VOID); }
main { strcpy(yylval.string,yytext); return(MAIN); }
break       { strcpy(yylval.string,yytext); return(BREAK); }
switch      { strcpy(yylval.string,yytext); return(SWITCH); }
case        { strcpy(yylval.string,yytext); return(CASE); }
default     { strcpy(yylval.string,yytext); return(DEFAULT); }
return      { strcpy(yylval.string,yytext); return(RETURN); }

        /* User Defined Data Types */
struct { strcpy(yylval.string,yytext); return(STRUCT); }

        /* Headers */
"#include" { return PREPROC; }

        /* C Libraries */
"math.h" { return MATH; }
"stdio.h" { return STDIO; }
"string.h" {return STRING; }

        /* Control while */
"while" { return(WHILE); }

        /* User Defined Data Types, Identifiers */
{LETTER}{ALL}* { strcpy(yylval.string,yytext); return IDENTIFIER;}
{DIGIT}+ { strcpy(yylval.string,yytext); return INTEGER_LITERAL;}
{DIGIT}+\.{DIGIT}+ { strcpy(yylval.string,yytext); return FLOAT_LITERAL;}
\"{ALL}+(".h"|".c")\" {return HEADER_LITERAL;}
{CHARACTER} {return(CHARACTER_LITERAL);}
{LETTER}?\"(\\.|[^\\"])*\" {return(STRING_LITERAL); }

        /* Assignment Operators */
"+=" {return(ADD_ASSIGN); }
"-=" {return(SUB_ASSIGN); }
"*=" {return(MUL_ASSIGN); }
"/=" {return(DIV_ASSIGN); }
"%=" {return(MOD_ASSIGN); }

        /*Logical Operation*/
"&&" { strcpy(yylval.string,yytext);return(AND_LOG); }
"||" { strcpy(yylval.string,yytext);return(OR_LOG); }
"!" { strcpy(yylval.string,yytext);return(NOT); }

";" {return(';'); }
"{" {return('{'); }
"}" {return('}'); }
"," {return(','); }
":" {return(':'); }
"=" {return('='); }
"(" {return('('); }
")" {return(')'); }
("["|"<:") {return('['); }
("]"|":>") {return(']'); }
"." {return('.'); }
"&" {return('&'); }

        /*Relational op*/
"<" { strcpy(yylval.string,yytext);return(LT); }
">" { strcpy(yylval.string,yytext);return(GT); }
"<=" { strcpy(yylval.string,yytext); return(LE_OP); }
">=" { strcpy(yylval.string,yytext); return(GE_OP); }
"==" { strcpy(yylval.string,yytext); return(EQ_OP); }
"!=" { strcpy(yylval.string,yytext); return(NE_OP); }

        /* eval op */

"-" { strcpy(yylval.string,yytext);return(SUB); }
"+" { strcpy(yylval.string,yytext);return(ADD); }
"*" { strcpy(yylval.string,yytext);return(MUL); }
"/" { strcpy(yylval.string,yytext);return(DIV); }
"%" { strcpy(yylval.string,yytext);return(MOD); }



{WS}+ { ;/* whitespace separates tokens */}

. { return(yytext[0]); }
"\n" {yylval.ival = line++; printf("\n%d\n",line);}
%%

int yywrap(void)
{
return 1;
}


static void comment(void)
{
    int c;

    while ((c = input()) != 0)
        if (c == '*')
        {
            while ((c = input()) == '*')
                ;

            if (c == '/')
                return;

            if (c == 0)
                break;
        }
    yyerror("unterminated comment");
}
