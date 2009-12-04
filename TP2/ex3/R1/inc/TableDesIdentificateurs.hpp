#ifndef TABLE_DES_IDENTIFICATEURS_DEF
#define TABLE_DES_IDENTIFICATEURS_DEF

/* Inclusion des librairies C standard */
#include <cstdlib>
#include <cstring>

/* Inclusion des librairies C++ standard */
#include <iostream>

/* Type de conteneur STL utilisé pour stocker les identificateurs. */
#include <deque>

#include "exceptions.hpp"

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
		 * @param[in] str Nom identificateur.
		 */
		void add(const char* str);

		/**
		 * Retour id d'un identifiant
		 * 
		 * @param[in] str Nom identificateur.
		 * @return unsigned int Id.
		 */
		unsigned int getId(const char* str);
};

#endif
