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
		/** Pr�fixe du nom du type. */
		static const char* _prefix;
		
		/** Type de la r�f�rence. */
		Type* _reference;
		
		/**
		 * Mets � jour le nom du type par rapport au type r�f�rence.
		 */
		void updateName();
	
	public:
		/**
		 * Constructeur.
		 *
		 * @param[in] reference Type de la r�f�rence.
		 */
		TypePointer(const Type* reference);

		/**
		 * Destructeur.
		 */
		virtual ~TypePointer();
		
		/**
		 * Modificateur du type de la r�f�rence.
		 *
		 * @param[in] reference Type de la r�f�rence.
		 */
		void setReference(const Type* reference);
		
		/**
		 * Accesseur du type de la r�f�rence.
		 *
		 * @return Type de la r�f�rence.
		 */
		Type* getReference() const;
};

#endif
