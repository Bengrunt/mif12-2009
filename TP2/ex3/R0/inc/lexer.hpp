#ifndef LEXER_INCLUDED
#define LEXER_INCLUDED

/* Inclusion des bibliothèques C++ standard */
#include <iostream>
#include <vector>

/* Inclusion des bibliothèques du projet. */
#include "TableDesIdentificateurs.hpp"
#include "ListeIdentificateurs.hpp"
#include "Type.hpp"
#include "TypeArray.hpp"
#include "TypeInterval.hpp"
#include "TypePointer.hpp"
#include "parser.hpp"

int yyerror(char* m);

#endif
