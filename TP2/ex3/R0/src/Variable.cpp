#include "Variable.hpp"

/* Constructeur. */
Variable::Variable(Type* type) :
	_type(type)
{}

/* Destructeur. */
Variable::~Variable() {}

/* Accesseurs. */
char* Variable::getCategory() const {
	return (char*) "variable";
}

char* Variable::getAttributes() const {
	return _type->getName();
}
