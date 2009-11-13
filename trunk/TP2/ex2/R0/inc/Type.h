#ifndef TYPE_DEF
#define TYPE_DEF
/**
 * Classe de gestion d'un type du langage Pascal.
 */
class Type {
	private:
		/** Constante correspondant au type courant. */
		TypeId _id;
		/** Chaîne correspondante au nom du type dans le langage. */
		char* _name;
	public:
		/** Enumération des types connus. */
		enum TypeId {
			BOOLEAN,	/**< Type booléen. */
			CHAR,		/**< Type caractère. */
			INTEGER,	/**< Type entier. */
			REAL,		/**< Type réel. */
			STRING		/**< Type chaîne de caractères. */
		};
		
		/**
		 * Constructeur.
		 *
		 * @param[in] id Id de type possible.
		 */
		Type(const TypeId id);
		
		/** 
		 * Obtenir nom du type courant.
		 * 
		 * @return Name du type courant.
		 */
		char* getName() const;

		/** 
		 * Obtenir du du type courant.
		 * 
		 * @return Id du type courant.
		 */
		TypeId getId() const;

		/**
		 * Changer type courant.
		 *
		 * @param[in] id Id de type possible.
		 */
		void setId(const TypeId id);
};
/**
 * Classe d'Exception d'un type inconnu.
 */
class UnknownTypeException: public std::exception {
	public:
		/** Message d'erreur à retourner. */
		const char* what() const throw() {
			return "Probleme : Type inconnu !";
		}
};

#endif
