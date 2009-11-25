#ifndef TYPE_DEF
#define TYPE_DEF

#include <cstring>
#include "exceptions.h"
/**
 * Classe abstraite de gestion d'un type du langage Pascal.
 */
class Type {
	protected:
		/** Chaîne correspondante au nom du type dans le langage. */
		char* _name;
	public:
		/**
		 * Destructeur (à définir dans les enfants).
		 */
		virtual ~Type() = 0;

		/** 
		 * Obtenir nom du type courant.
		 * 
		 * @return Name du type courant.
		 */
		char* getName() const;
};

#endif
