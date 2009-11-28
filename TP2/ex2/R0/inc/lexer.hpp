#ifndef LEXER_INCLUDED
#define LEXER_INCLUDED

/* Inclusion des bibliothèques C++ standard */
#include <iostream>

/* Inclusion des bibliothèques du projet. */
#include "TableDesIdentificateurs.hpp"
#include "Type.hpp"
#include "parser.hpp"

int yyerror(char* m);

#endif
