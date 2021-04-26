typedef enum { typeCon, typeId, typeOpr } nodeEnum;

/* constants */
typedef struct 
{
	char value[100]; /* value of constant */
} conNodeType;

/* identifiers */
typedef struct
{
	char name[100]; /* subscript to sym array */
} idNodeType;

/* operators */
typedef struct 
{
	int oper; /* operator */
	int nops; /* number of operands */
	struct nodeTypeTag *op[1]; /* operands, extended at runtime */
} oprNodeType;

typedef struct nodeTypeTag 
{
	nodeEnum type; /* type of node */
	union
	{
		conNodeType con; /* constants */
		idNodeType id; /* identifiers */
		oprNodeType opr; /* operators */
	};
}nodeType;
