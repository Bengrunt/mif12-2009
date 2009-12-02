#ifndef TYPE_POINTER_DEF
#define TYPE_POINTER_DEF

#include <cstring>
#include "Type.hpp"
#include "exceptions.hpp"

/**
 * Classe de gestion d'un type pointeur sur un autre type.
 */
class TypePointer : public Type {
	protected:
		/** Préfixe du nom du type. */
		static const char* _prefix;
		
		/** Type de la référence. */
		Type* _reference;
		
		/**
		 * Mets à jour le nom du type par rapport au type référence.
		 */
		void updateName();
	
	public:
		/**
		 * Constructeur.
		 *
		 * @param[in] reference Type de la référence.
		 */
		TypePointer(const Type* reference);

		/**
		 * Destructeur.
		 */
		virtual ~TypePointer();
		
		/**
		 * Modificateur du type de la référence.
		 *
		 * @param[in] reference Type de la référence.
		 */
		void setReference(const Type* reference);
		
		/**
		 * Accesseur du type de la référence.
		 *
		 * @return Type de la référence.
		 */
		Type* getReference() const;
};

#endif
