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
		 * Retourne nom de la cat�gorie de symbole (variable, temporaire, �tiquette...)
		 *
		 * @return Nom de la cat�gorie.
		 */
		virtual char* getCategory() const;

		/**
		 * Retourne cha�ne de caract�res repr�sentant les attributs du symbole.
		 *
		 * @return Cha�ne repr�sentant les attributs du symbole.
		 */
		virtual char* getAttributes() const;
};

#endif
