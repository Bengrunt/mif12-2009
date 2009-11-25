#ifndef VARIABLE_DEF
#define VARIABLE_DEF

#include "Symbole.h"
#include "Type.h"
/**
 * Classe de gestion d'un symbole d'un programme en Pascal.
 */
class Variable : public Symbole{
	private:
		/** Type du symbole. */
		Type* _type;
	public:
		/**
		 * Constructeur.
		 *
		 * @param[in] type Type du symbole.
		 */
		Variable(Type* type);

		/**
		 * Destructeur
		 */
		virtual ~Variable();

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
