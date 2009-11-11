%{
#include <stdio.h>
#include <stdlib.h>

int nbo; /**< Nombre d'accolades ouvertes. */
int nbf; /**< Nombre d'accolades fermées. */
int good; /**< Booléen indiquant bonne imbrication. */
%}
%%
\{	nbo++;
\}	if(nbo <= nbf){good = 0;} nbf++;
.|\n	;
%%
int main(int argc, char* argv[]) {
	/* Un fichier vide a au moins 0 accolades ouvrantes ou fermantes. */
	nbo = 0;
	nbf = 0;
	
	/* Initialisation du booléen. */
	good = 1;
	
	/* Vérification arguments. */
	if(argc != 2) {
		fprintf(stderr, "Erreur : Vous devez passer une source Pascal en argument.\n");
		exit(EXIT_FAILURE);
	}
	
	/* Redirection de l'entrée de yyin. */
	yyin = fopen(argv[1], "r");
	if(yyin == NULL) {
		return EXIT_FAILURE;
	}
	
	/* Analyse lexicale. */
	yylex();

	/* Affichage des résultats. */
	if(nbo!=nbf || !good) {
		printf("Imbrication incorrecte des accolades.\n");
	} else {
		printf("Imbrication correcte des accolades.\n");
	}

	return EXIT_SUCCESS;
}

