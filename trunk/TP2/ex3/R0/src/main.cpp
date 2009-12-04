#include <iostream>
#include "globals.hpp"
#include "parser.hpp"

/* Ressources internes. */
extern int yyparse();
extern TableDesIdentificateurs ti; /**< Table des indentificateurs. */
extern TableDesSymboles ts; /**< Table des symboles. */

int main (int argc, char** argv) {
	/* Vérification arguments. */
	if(argc != 2) {
		std::cerr << "Erreur : Vous devez passer une source Pascal en argument." << std::endl;
		exit(EXIT_FAILURE);
	}
	
	yyin = fopen(argv[1], "r");
	if(yyin == NULL) {
		return EXIT_FAILURE;
	}
	
    yyparse();
	
	std::cout << "Table des identificateurs : ---------------------------------------------------" << std::endl;
	ti.print();
	std::cout << "Table des symboles : ----------------------------------------------------------" << std::endl;
	ts.print();
	
    fclose(yyin);
	
	return EXIT_SUCCESS;
}
