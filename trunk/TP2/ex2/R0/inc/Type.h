#ifndef TYPE_DEF
#define TYPE_DEF

#include <cstring>
#include "exceptions.h"
/**
 * Classe de gestion d'un type du langage Pascal.
 */
class Type {
	private:
		/** Liste des types de base du Pascal. */
		static const char* names[];

		/** Chaîne correspondante au nom du type dans le langage. */
		char* _name;
	public:
		/**
		 * Constructeur.
		 *
		 * @param[in] name Nom du type.
		 */
		Type(const char* name) throw();
		
		/** 
		 * Obtenir nom du type courant.
		 * 
		 * @return Name du type courant.
		 */
		char* getName() const;

		/**
		 * Changer type courant.
		 *
		 * @param[in] name Nom du type.
		 */
		void setName(const char* name) throw();
};

#endif
