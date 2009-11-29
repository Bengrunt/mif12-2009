#include "ListeIdentificateurs.hpp"

ListeIdentificateurs::ListeIdentificateurs() {}

ListeIdentificateurs::~ListeIdentificateurs() {
	for(unsigned int i = 0; i < _identificateurs.size(); i++) {
		delete[] _identificateurs[i];
	}
}

void ListeIdentificateurs::add(const char* str) {
	char* tmp = new char[strlen(str) + 1];
	if(!tmp) throw new AllocationException;
	
	strcpy(tmp, str);

	_identificateurs.push_back(tmp);
}

unsigned int ListeIdentificateurs::size() const {
	return _identificateurs.size();
}

const char* ListeIdentificateurs::get(const unsigned int i) const {
	return _identificateurs[i];
}
