#ifndef TYPE_BOOLEAN_DEF
#define TYPE_BOOLEAN_DEF

#include <cstring>
#include "Type.h"
/**
 * Classe de gestion d'un type booléen du langage Pascal.
 */
class TypeBoolean : public Type {
	public:
		/**
		 * Constructeur.
		 */
		TypeBoolean();

		/**
		 * Destructeur.
		 */
		virtual ~TypeBoolean();
};

#endif
