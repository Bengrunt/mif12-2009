#include "Type.h"

/* Constructeur */
Type::Type(TypeId id) {
	this.setId(id);
}


/* Accesseurs. */
char* Type::getName() {
	return _name;
}
		
TypeId Type::getId() {
	return _id;
}

/* Modificateurs. */
void Type::setId(TypeId id) {
	switch(id) {
		case BOOLEAN:			
			_name = "boolean";
		case CHAR:
			_name = "char";
		case INTEGER:
			_name = "integer";
		case REAL:
			_name = "real";
		case STRING:
			_name = "string";
		default:
			throw new UnknownTypeException;
	}
	_id = id;
}

