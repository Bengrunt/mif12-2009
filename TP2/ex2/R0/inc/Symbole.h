#ifndef TYPE_DEF
#define TYPE_DEF
/**
 * Classe de gestion d'un symbole d'un programme en Pascal.
 */
class Symbole {
	private:
		/** Constante correspondant au type de symbole courant. */
		SymboleTypeId _id;
		/** Chaîne correspondante au nom du type de symbole dans le langage. */
		char* _name;
	public:
		/** Enumération des types de symboles connus. */
		enum SymboleTypeId {
			PROGRAM,	/**< Programme. */
			PROCEDURE,	/**< Procédure. */
			FUNCTION,	/**< Fonction. */
			VAR			/**< Variable. */
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
