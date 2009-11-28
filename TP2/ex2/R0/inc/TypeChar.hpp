#ifndef TYPE_CHAR_DEF
#define TYPE_CHAR_DEF

#include <cstring>
#include "Type.hpp"
/**
 * Classe de gestion d'un type caractère du langage Pascal.
 */
class TypeChar : public Type {
	public:
		/**
		 * Constructeur.
		 */
		TypeChar();

		/**
		 * Destructeur.
		 */
		virtual ~TypeChar();
};

#endif
