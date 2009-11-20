#ifndef TABLE_DES_SYMBOLES_DEF
#define TABLE_DES_SYMBOLES_DEF

/* Inclusion des librairies C++ standard */
#include <iostream>

/* Type de conteneur STL utilisé pour stocker les identificateurs. */
#include <deque>

#include "Symbole.h"

class TableDesSymboles {
	private:
		/** Conteneur des symboles. */
		std::deque<Symbole> _symboles;

	public:
		/** Constructeur. */
		TableDesSymboles();
		
		/** Affichage de la table. */
		void print() const;
		
		/**
		 * Ajout d'un nouveau symbole.
		 * 
		 * @param symbole Nouveau symbole.
		 */
		void add(const Symbole symbole);
};

#endif
