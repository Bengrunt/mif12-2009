#include "Symbole.h"

/* Constructeur. */
Symbole::Symbole(const unsigned int id, const Type& type) throw() :
	_type(type),
	_id(id)
{}

/* Accesseurs. */
unsigned int Symbole::getId() const {
	return _id;
}
Type Symbole::getType() const {
	return _type;
}

char* Symbole::getTypeName() const {
	return _type.getName();
}

/* Modificateurs. */
void Symbole::setId(const unsigned int id) {
	_id = id;
}
void Symbole::setType(const Type& type) throw() {
	_type = type;
}
