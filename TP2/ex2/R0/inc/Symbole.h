#ifndef SYMBOLE_DEF
#define SYMBOLE_DEF

#include "Type.h"
/**
 * Classe de gestion d'un symbole d'un programme en Pascal.
 */
class Symbole {
	private:
		/** Id du symbole. */
		unsigned int _id;
		/** Type du symbole. */
		Type _type;
	public:
		/**
		 * Constructeur.
		 *
		 * @param[in] id Id du symbole.
		 * @param[in] type Type du symbole.
		 */
		Symbole(const unsigned int, const Type& type) throw();
		
		/** 
		 * Obtenir id du symbole courant.
		 * 
		 * @return Id du symbole courant.
		 */
		unsigned int getId() const;

		/**
		 * Changer symbole courant.
		 *
		 * @param[in] name Nom du symbole.
		 */
		void setId(const unsigned int);
		
		/** 
		 * Obtenir type du symbole courant.
		 * 
		 * @return Type du symbole courant.
		 */
		Type getType() const;

		/** 
		 * Obtenir nom du type du symbole courant.
		 * 
		 * @return Nom du type du symbole courant.
		 */
		char* getTypeName() const;

		/**
		 * Changer symbole courant.
		 *
		 * @param[in] type Type du symbole.
		 */
		void setType(const Type& type) throw();
};

#endif
