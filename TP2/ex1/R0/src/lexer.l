%{
#include "lexer.h"

TableDesIdentificateurs table; /**< Table des indentificateurs. */
bool inBlock; /**< Booléen informant sur la présence dans une bloc de code. */
bool inCommentBlock; /**< Booléen informant sur la présence dans une bloc de 
                          ccommentaires. */
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
SEP_COL				":"
SEP_SCOL			";"
SEP_COMMA			","

TYPE_DCL			{SEP_COL}.*{SEP_SCOL}

COMMENT_BEGIN 		\(\*
COMMENT_END 		\*\)

IDENT 				[a-zA-Z][a-zA-Z0-9]*
%%
{KW_BEGIN}			inBlock = true;
{KW_END}			inBlock = false;
{COMMENT_BEGIN}		inCommentBlock = true;
{COMMENT_END}		inCommentBlock = false;

{TYPE_DCL}			;
{KW_PROGRAM}		;
{KW_PROCEDURE}		;
{KW_FUNCTION}		;
{KW_TYPE}			;
{KW_VAR}			;

{IDENT}				if(!inBlock && !inCommentBlock) {
						try{table.add(yytext);}
						catch(AllocationException e) {
							std::cerr << e.what() << std::endl;
							exit(EXIT_FAILURE);
						}
					}
.					;
\n              ;
%%

int main (int argc, char* argv[]) {   
	inBlock = false;
	inCommentBlock = false;
	yyin = fopen(argv[1], "r");
	yylex ();
	table.print();
	fclose (yyin);
}