#include "TableDesSymboles.hpp"

TableDesSymboles::TableDesSymboles() {}

void TableDesSymboles::print() const {
	for(unsigned int i = 0; i < _symboles.size(); i++)
		std::cout << "[" << i << "] -> " << _symboles[i]->getCategory() << " : " << _symboles[i]->getAttributes() << std::endl;
}

void TableDesSymboles::add(Symbole* symbole) {
	/* Ajout du symbole au conteneur. */
	_symboles.push_back(symbole);
}
