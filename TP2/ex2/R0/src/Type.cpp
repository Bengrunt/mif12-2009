#include "Type.h"

Type::Type(TypeId name) {}

char* Type::getName() {
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