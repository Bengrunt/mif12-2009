#ifndef LEXER_INCLUDED
#define LEXER_INCLUDED

/* Inclusion des biblioth�ques C++ standard */
#include <iostream>
#include <vector>

/* Inclusion des biblioth�ques du projet. */
#include "TableDesIdentificateurs.hpp"
#include "ListeIdentificateurs.hpp"
#include "Type.hpp"
#include "TypeArray.hpp"
#include "TypeInterval.hpp"
#include "TypePointer.hpp"
#include "parser.hpp"

int yyerror(char* m);

#endif
