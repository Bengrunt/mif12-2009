#ifndef TYPE_STRING_DEF
#define TYPE_STRING_DEF

#include <cstring>
#include "Type.h"
/**
 * Classe de gestion d'un type caractère du langage Pascal.
 */
class TypeString : public Type {
	public:
		/**
		 * Constructeur.
		 */
		TypeString();

		/**
		 * Destructeur.
		 */
		virtual ~TypeString();
};

#endif
