%{
#include "lexer.hpp"
%}
KW_TYPE				"type"
KW_FUNCTION			"function"
KW_PROCEDURE		"procedure"
KW_PROGRAM			"program" 
KW_CONST			"const"
KW_VAR				"var"
KW_BEGIN			"begin"
KW_END				"end"
KW_INTEGER			"integer"
KW_REAL				"real"
KW_BOOLEAN			"boolean"
KW_CHAR				"char"
KW_STRING			"string"
KW_ARRAY			"array"
KW_OF				"of"
KW_PTR				"pointer"
KW_RECORD			"record"
KW_DIV				"div"
KW_MOD				"mod"
KW_AND				"and"
KW_OR				"or"
KW_XOR				"xor"
KW_NOT				"not"
KW_FOR				"for"
KW_TO				"to"
KW_REPEAT			"repeat"
KW_UNTIL			"until"
KW_WHILE			"while"
KW_DO				"do"
KW_ELSE				"else"
KW_IF				"if"
KW_THEN				"then"
KW_DOWNTO			"downto"

SEP_DOT				\.
SEP_DOTDOT			\.\.
SEP_COL				":"
SEP_SCOL			";"
SEP_COMMA			","
SEP_CO				"["
SEP_CF				"]"
SEP_PO				"("
SEP_PF				")"

OP_EQ				"="
OP_NEQ				"<>"
OP_LT				"<"
OP_LTE				"<="
OP_GT				">"
OP_GTE				">="
OP_ADD				"+"
OP_SUB				"-"
OP_MUL				"*"
OP_SLASH			"/"
OP_EXP				"**"
OP_PTR				"->"|"^"
OP_AFFECT			":="

chiffre				[0-9]
chiffres			{chiffre}+
alpha				[a-z]|[A-Z]
alphanum			[a-z]|[A-Z]|[0-9]

TOK_IDENT 			{alpha}{alphanum}*
TOK_INTEGER			{chiffres}
TOK_REAL			{chiffres}.{chiffres}(E(\+|\-)?{chiffres})?
TOK_PTR				"nil"
TOK_CHAR			\'{alphanum}\'
TOK_STRING			\'([^\']|\'\')+\'

%%
{KW_TYPE}			{return KW_TYPE;}
{KW_PROGRAM}		{return KW_PROGRAM;}
{KW_FUNCTION}		{return KW_FUNCTION;}
{KW_PROCEDURE}		{return KW_PROCEDURE;}
{KW_CONST}			{return KW_CONST;}
{KW_VAR}			{return KW_VAR;}
{KW_BEGIN}			{return KW_BEGIN;}
{KW_END}			{return KW_END;}
{KW_INTEGER}		{return KW_INTEGER;}
{KW_REAL}			{return KW_REAL;}
{KW_BOOLEAN}		{return KW_BOOLEAN;}
{KW_CHAR}			{return KW_CHAR;}
{KW_STRING}			{return KW_STRING;}
{KW_ARRAY}			{return KW_ARRAY;}
{KW_OF}				{return KW_OF;}
{KW_PTR}			{return KW_PTR;}
{KW_RECORD}			{return KW_RECORD;}
{KW_DIV}			{return KW_DIV;}
{KW_MOD}			{return KW_MOD;}
{KW_AND}			{return KW_AND;}
{KW_OR}				{return KW_OR;}
{KW_XOR}			{return KW_XOR;}
{KW_NOT}			{return KW_NOT;}
{KW_FOR}			{return KW_FOR;}
{KW_TO}				{return KW_TO;}
{KW_REPEAT}			{return KW_REPEAT;}
{KW_UNTIL}			{return KW_UNTIL;}
{KW_WHILE}			{return KW_WHILE;}
{KW_DO}				{return KW_DO;}
{KW_ELSE}			{return KW_ELSE;}
{KW_IF}				{return KW_IF;}
{KW_THEN}			{return KW_THEN;}
{KW_DOWNTO}			{return KW_DOWNTO;}

{SEP_DOT}			{return SEP_DOT;}
{SEP_DOTDOT}		{return SEP_DOTDOT;}
{SEP_COL}			{return SEP_COL;}
{SEP_SCOL}			{return SEP_SCOL;}
{SEP_COMMA}			{return SEP_COMMA;}
{SEP_CO}			{return SEP_CO;}
{SEP_CF}			{return SEP_CF;}
{SEP_PO}			{return SEP_PO;}
{SEP_PF}			{return SEP_PF;}

{OP_EQ}				{return OP_EQ;}
{OP_NEQ}			{return OP_NEQ;}
{OP_LT}				{return OP_LT;}
{OP_LTE}			{return OP_LTE;}
{OP_GT}				{return OP_GT;}
{OP_GTE}			{return OP_GTE;}
{OP_ADD}			{return OP_ADD;}
{OP_SUB}			{return OP_SUB;}
{OP_MUL}			{return OP_MUL;}
{OP_SLASH}			{return OP_SLASH;}
{OP_EXP}			{return OP_EXP;}
{OP_PTR}			{return OP_PTR;}
{OP_AFFECT}			{return OP_AFFECT;}

{TOK_INTEGER}		{return TOK_INTEGER;}
{TOK_REAL}			{return TOK_REAL;}
{TOK_CHAR}			{return TOK_CHAR;}
{TOK_PTR}			{return TOK_PTR;}
{TOK_STRING}		{return TOK_STRING;}
{TOK_IDENT}			{return TOK_IDENT;}
.					;
\n              	;

%%
int yyerror(char* m) {
	printf("%s [%s]", m, yytext);
	return 0;
}
