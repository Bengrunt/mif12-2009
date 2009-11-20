#ifndef TABLE_DES_IDENTIFICATEURS_DEF
#define TABLE_DES_IDENTIFICATEURS_DEF

/* Inclusion des librairies C standard */
#include <cstdlib>
#include <cstring>
#include "exceptions.h"

/* Inclusion des librairies C++ standard */
#include <iostream>

/* Type de conteneur STL utilisé pour stocker les identificateurs. */
#include <deque>

class TableDesIdentificateurs {
	private:
		/** Conteneur des identificateurs. */
		std::deque<char*> ids;

	public:
		/** Constructeur. */
		TableDesIdentificateurs();
		
		/** Affichage de la table. */
		void print() const;
		
		/**
		 * Ajout d'un nouvel identificateur.
		 * 
		 * @param str Nom identificateur.
		 */
		void add(const char* str);
};

#endif
