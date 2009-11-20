#include "TableDesSymboles.h"

TableDesSymboles::TableDesSymboles() {}

void TableDesSymboles::print() const {
	for(int i = 0; i < _symboles.size(); i++)
		std::cout << "[" << i << "] -> " << _symboles[i].getTypeName() << std::endl;
}

void TableDesSymboles::add(const Symbole symbole) {
	/* Ajout du symbole au conteneur. */
	_symboles.push_back(symbole);
}
