#ifndef SYMBOLE_DEF
#define SYMBOLE_DEF

/**
 * Classe de gestion d'un symbole d'un programme en Pascal.
 */
class Symbole {
	private:
	public:
		/**
		 * Destructeur virtuel : classe abstraite.
		 */
		virtual ~Symbole() = 0;

		/**
		 * Retourne nom de la catégorie de symbole (variable, temporaire, étiquette...)
		 *
		 * @return Nom de la catégorie.
		 */
		virtual char* getCategory() const = 0;

		/**
		 * Retourne chaîne de caractères représentant les attributs du symbole.
		 *
		 * @return Chaîne représentant les attributs du symbole.
		 */
		virtual char* getAttributes() const = 0;
};

#endif
