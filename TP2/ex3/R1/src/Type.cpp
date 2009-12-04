#include "Type.hpp"

/* Constructeur. */
Type::Type(): _name(NULL) {}

/* Destructeur. */
Type::~Type() {}

/* Accesseurs. */
char* Type::getName() const {
	return _name;
}
