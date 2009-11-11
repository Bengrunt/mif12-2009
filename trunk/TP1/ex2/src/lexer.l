%{
#include <stdio.h>
#include <stdlib.h>

int nbl; /**< Compteur du nombre de lignes. */
int nbc; /**< Compteur du nombre de caractères. */
int nbm; /**< Compteur du nombre de mots. */
int mot; /**< Booléen indiquant si le mot courant a déjà été compté. */
%}
%%
[ \t]	{if(mot){nbm++;}nbc++;mot=0;}
\r\n	{if(mot){nbm++;}nbc+=2;mot=0;}
\n	nbl++; {if(mot){nbm++;}nbc++;mot=0;}
\r	nbl++; {if(mot){nbm++;}nbc++;mot=0;}
.	nbc++; mot = 1;
%%
int main(int argc, char* argv[]) {
	/* Un fichier vide a au moins 1 ligne, 0 caractères et 0 mots. */
	nbc = 0;
	nbl = 1;
	nbm = 0;
	
	/* Initialisation booléen. */
	mot = 0;

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

	/* Affichage résultat. */
	printf("Nombre de lignes : %d\n", nbl);
	printf("Nombre de mots : %d\n", nbm);
	printf("Nombre de caracteres : %d\n", nbc);

	return EXIT_SUCCESS;
}
