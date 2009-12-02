#include "TypePointer.hpp"
#include "cstdio"

const char* TypePointer::_prefix = "pointer of ";

/**
 * Constructeur.
 */
TypePointer::TypePointer(const Type* reference):
	_reference((Type*)reference)
{
	updateName();
}

/**
 * Destructeur.
 */
TypePointer::~TypePointer() {
	delete[] _name;
}

void TypePointer::setReference(const Type* reference) {
	_reference = (Type*)reference;
	updateName();
}

Type* TypePointer::getReference() const {
	return _reference;
}

void TypePointer::updateName() {
	char* referenceName = _reference->getName();
	char* tmp = NULL;
	
	tmp = new char[strlen(_prefix) + strlen(referenceName) + 1];
	if(!tmp) throw new AllocationException;
	
	strcpy(tmp, _prefix);
	strcat(tmp, referenceName);
	
	if(_name) delete[] _name;
	_name = tmp;
}
