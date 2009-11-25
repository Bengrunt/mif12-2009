#ifndef TYPE_INTEGER_DEF
#define TYPE_INTEGER_DEF

#include <cstring>
#include "Type.h"
/**
 * Classe de gestion d'un type entier du langage Pascal.
 */
class TypeInteger : public Type {
	public:
		/**
		 * Constructeur.
		 */
		TypeInteger();

		/**
		 * Destructeur.
		 */
		virtual ~TypeInteger();
};

#endif
