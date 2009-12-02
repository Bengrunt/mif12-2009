#ifndef LEXER_INCLUDED
#define LEXER_INCLUDED

/* Inclusion des biblioth�ques C++ standard */
#include <iostream>

/* Inclusion des biblioth�ques du projet. */
#include "TableDesIdentificateurs.hpp"
#include "ListeIdentificateurs.hpp"
#include "Type.hpp"
#include "TypeInterval.hpp"
#include "parser.hpp"

int yyerror(char* m);

#endif
