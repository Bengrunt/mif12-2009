#ifndef PROGRAM_DEF
#define PROGRAM_DEF

#include "Symbole.hpp"

/**
 * Classe de gestion d'un symbole d'un programme en Pascal.
 */
class Program : public Symbole {
	private:
	public:
		/**
		 * Constructeur.
		 */
		Program();

		/**
		 * Destructeur
		 */
		virtual ~Program();

		/**
		 * Retourne nom de la catégorie de symbole (variable, temporaire, étiquette...)
		 *
		 * @return Nom de la catégorie.
		 */
		virtual char* getCategory() const;

		/**
		 * Retourne chaîne de caractères représentant les attributs du symbole.
		 *
		 * @return Chaîne représentant les attributs du symbole.
		 */
		virtual char* getAttributes() const;
};

#endif
