%{
#include "lexer.hpp"
%}
KW_TYPE				"type"
KW_FUNCTION			"function"
KW_PROCEDURE		"procedure"
KW_PROGRAM			"program" 
KW_VAR				"var"
KW_BEGIN			"begin"
KW_END				"end"
KW_INTEGER			"integer"
KW_REAL				"real"
KW_BOOLEAN			"boolean"
KW_CHAR				"char"
KW_STRING			"string"

SEP_DOT				"."
SEP_DOTDOT			".."
SEP_COL				":"
SEP_SCOL			";"
SEP_COMMA			","

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

/*COMMENT_BEGIN 		\(\**/
/*COMMENT_END 		\*\)*/

TOK_IDENT 			[a-zA-Z][a-zA-Z0-9]*
TOK_INTEGER			{[0-9]+}

%%
{KW_PROGRAM}		{return KW_PROGRAM;}
{KW_VAR}			{return KW_VAR;}
{KW_BEGIN}			{return KW_BEGIN;}
{KW_END}			{return KW_END;}
{KW_INTEGER}		{return KW_INTEGER;}
{KW_REAL}			{return KW_REAL;}
{KW_BOOLEAN}		{return KW_BOOLEAN;}
{KW_CHAR}			{return KW_CHAR;}
{KW_STRING}			{return KW_STRING;}

{SEP_DOT}			{return SEP_DOT;}
{SEP_COL}			{return SEP_COL;}
{SEP_SCOL}			{return SEP_SCOL;}
{SEP_COMMA}			{return SEP_COMMA;}

{OP_PTR}			{return OP_PTR;}
{OP_SUB}			{return OP_SUB;}

{TOK_IDENT}			{return TOK_IDENT;}
.					;
\n              	;

%%
int yyerror(char* m) {
	printf("%s [%s]", m, yytext);
	return 0;
}