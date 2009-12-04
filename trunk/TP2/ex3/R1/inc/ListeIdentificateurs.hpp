#ifndef LISTE_IDENTIFICATEURS_DEF
#define LISTE_IDENTIFICATEURS_DEF

/* Type de conteneur STL utilisé pour stocker les identificateurs. */
#include <deque>

/* Inclusion des librairies C standard */
#include <cstdlib>
#include <cstring>

#include "Type.hpp"
#include "exceptions.hpp"

class ListeIdentificateurs {
	private:
		/** Conteneur des identificateurs. */
		std::deque<const char*> _identificateurs;

	public:
		/**
		 * Constructeur.
		 */
		ListeIdentificateurs();
		
		/**
		 * Destructeur.
		 */
		~ListeIdentificateurs();
		
		/**
		 * Comptabilisation d'un nouvel identificateur
		 *
		 * @param[in] str Nouvel identificateur.
		 */
		void add(const char* str);
		
		/**
		 * Nombre d'identificateurs.
		 *
		 * @return Nombre d'identificateurs comptabilisés.
		 */
		unsigned int size() const;
		
		/**
		 * Accesseur sur un identificateur.
		 *
		 * @param[in] i Position de l'identificateur dans la liste.
		 * @return Nom de l'identificateur.
		 */
		const char* get(const unsigned int i) const;
};

#endif
