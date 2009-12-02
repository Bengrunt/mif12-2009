#ifndef TYPE_INTERVAL_DEF
#define TYPE_INTERVAL_DEF

#include <cstring>
#include "Type.hpp"
#include "exceptions.hpp"

/**
 * Classe de gestion d'un type interval.
 */
class TypeInterval : public Type {
	public:
		/** Type d'une borne de l'intervalle. */
		struct Boundary {
			bool id; /**< Cette borne fait référence à un identificateur ? */
			union {
				int iVal; /**< Valeur entière. */
				unsigned int id; /**< Pointeur sur variable correspondante. */
			} data; /**< Valeur de la borne ou identificateur. */
		};
		
	protected:
		/** Constantes identifiant les marqueurs d'une chaîne de format. */
		enum FormatTagId {
			STR,	/**< Chaîne de caractères. */
			D_INT, /**< Entier signé sous sa forme décimal. */
			D_UINT /**< Entier non signé sous sa forme décimal. */
		};
		
		/** Format générique du nom du type. */
		static const char* _genericNameFormat;
		
		/** Tableau des marqueurs d'une chaîne de format. */
		static const char* _tags[];
		
		/** Format d'un identificateur de borne. */
		static const char* _idFormat;
		
		/** Format d'une valeur de borne signée. */
		static const char* _iValFormat;
		
		/** Format du nom du type. */
		char* _nameFormat;
		
		/** Borne inférieure. */
		Boundary _minimum;
		
		/** Borne supérieure. */
		Boundary _maximum;
		
		/**
		 * Mets à jour le format par rapport aux bornes.
		 */
		void updateFormat();
		
		/**
		 * Mets à jour le nom du type par rapport aux bornes.
		 */
		void updateName();
	
	public:		
		/**
		 * Constructeur.
		 *
		 * @param[in] minimum Borne inférieure.
		 * @param[in] minimum Borne supérieure.
		 */
		TypeInterval(const Boundary minimum, const Boundary maximum);

		/**
		 * Destructeur.
		 */
		virtual ~TypeInterval();
		
		/**
		 * Modificateur de la borne inférieure de l'intervalle.
		 *
		 * @param[in] minimum Borne inférieure.
		 */
		void setMinimum(const Boundary minimum);
		
		/**
		 * Accesseurde la borne inférieure de l'intervalle.
		 *
		 * @return Borne inférieure.
		 */
		Boundary getMinimum() const;
		
		/**
		 * Modificateur de la borne supérieure de l'intervalle.
		 *
		 * @param[in] maximum Borne supérieure.
		 */
		void setMaximum(const Boundary maximum);
		
		/**
		 * Accesseurde la borne supérieure de l'intervalle.
		 *
		 * @return Borne supérieure.
		 */
		Boundary getMaximum() const;
};

#endif
