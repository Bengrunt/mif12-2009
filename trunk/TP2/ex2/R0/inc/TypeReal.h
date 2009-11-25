#ifndef TYPE_REAL_DEF
#define TYPE_REAL_DEF

#include <cstring>
#include "Type.h"
/**
 * Classe de gestion d'un type réel du langage Pascal.
 */
class TypeReal : public Type {
	public:
		/**
		 * Constructeur.
		 */
		TypeReal();

		/**
		 * Destructeur.
		 */
		virtual ~TypeReal();
};

#endif
