#ifndef TYPE_ARRAY_DEF
#define TYPE_ARRAY_DEF

#include <cstring>
#include <deque>
#include "Type.hpp"
#include "TypeInterval.hpp"
#include "exceptions.hpp"

/**
 * Classe de gestion d'un type interval.
 */
class TypeArray : public Type {
	protected:
		/** Type des cases du tableau. */
		Type* _type;

		/** Bornes du tableau. */
		std::deque<TypeInterval*> _intervals;
	public:
		/**
		 * Constructeur.
		 *
		 * @param[in] type Type de la référence.
		 */
		TypeArray(const Type* type, std::deque<TypeInterval*> intervals);

		/**
		 * Destructeur.
		 */
		virtual ~TypeArray();
		
		/**
		 * Modificateur du type.
		 *
		 * @param[in] type Type.
		 */
		void setType(const Type* type);
	
		/**
		 * Accesseur du type.
		 *
		 * @return Type .
		 */
		Type* getType() const;
		
		/**
		 * Modificateur des intervalles.
		 *
		 * @param[in] intervals Liste d'intervalles.
		 */
		void setIntervals(const std::deque<TypeInterval*>* intervals);
	
		/**
		 * Accesseur des intervalles.
		 *
		 * @return Liste des intervalles.
		 */
		std::deque<TypeInterval*>* getIntervals() const;
};

#endif
