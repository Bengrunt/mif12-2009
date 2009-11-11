#ifndef TYPE_DEF
#define TYPE_DEF

// /* Inclusion des librairies C standard */
// #include <cstdlib>
// #include <cstring>

// /* Inclusion des librairies C++ standard */
// #include <iostream>

// /* Type de conteneur STL utilisé pour stocker les identificateurs. */
// #include <deque>
class Type {
	private:
		TypeId _type;
		char* _name;
		void _setName();
		
	public:
		enum TypeId {
			BOOLEAN,
			CHAR,
			INTEGER,
			REAL,
			STRING
		};
		
		/** Constructeur. */
		Type(char* name);
		
		char* getName() {
			switch(_type) {
				case BOOLEAN:
					return "boolean";
				case CHAR:
					return "char";
				case INTEGER:
					return "integer";
				case REAL:
					return "real";
				case STRING:
					return "string";
				default:
					throw new UnknownTypeException;
			}
		}
		
		TypeId getType();
		
		void setType(TypeId id);
		
		// /** Affichage de la table. */
		// void print() const;
		
		// /**
		 // * Ajout d'un nouvel identificateur.
		 // * 
		 // * @param str Nom identificateur.
		 // */
		// void add(const char* str);
};

class UnknownTypeException: public std::exception {
	public:
		const char* what() const throw() {
			return "Probleme : Type inconnu !";
		}
};

#endif
