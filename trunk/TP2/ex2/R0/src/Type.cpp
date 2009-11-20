#include "Type.h"
const char* Type::names[] = {
	"boolean",
	"char",
	"integer",
	"real",
	"string"
};

/* Constructeur */
Type::Type(const char* name) throw() :
	_name(NULL) {
	setName(name);
}


/* Accesseurs. */
char* Type::getName() const {
	return _name;
}

/* Modificateurs. */
void Type::setName(const char* name) throw() {
	// Taille du tableau de types de base.
	size_t nbTypes = sizeof(Type::names) / sizeof(char*);
	if(_name != NULL) {
		delete[] _name;
		_name = NULL;
	}
	// Recherche du type dans le tableau des types de base.
	for(int i = 0; i <  nbTypes; i++) {
		if(strcmp(name, names[i]) == 0) {
			_name = new char[strlen(name) + 1];
			if(_name == NULL) {
				throw NullPointerException();
			}
			return;
		}
	}
	// Nom de type non trouvé
	throw UnknownBasicTypeException();
}
