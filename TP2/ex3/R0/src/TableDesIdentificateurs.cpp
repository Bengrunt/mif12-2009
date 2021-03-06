#include "TableDesIdentificateurs.hpp"

TableDesIdentificateurs::TableDesIdentificateurs() {}

void TableDesIdentificateurs::print() const {
	for(unsigned int i = 0; i < ids.size(); i++)
		std::cout << "[" << i << "] -> " << ids[i] << std::endl;
}

void TableDesIdentificateurs::add(const char* str) {
	/* Pointeur sur chaîne contenant le nom de l'identificateur. */
	char* tmp = NULL;
	/* Si l'élément est déjà présent on ne l'ajoute pas. */
	if(ids.size() != 0)
		for(unsigned int i = 0; i < ids.size(); i++) 
			if(strcmp(str, ids[i]) == 0) return;

	/* Copie chaîne nom identificateur. */
	tmp = (char*) calloc(strlen(str) + 1, sizeof(char));
	if(!tmp) {
		throw new AllocationException;
	}
	strcpy(tmp, str);
	
	/* Ajout de l'indentificateur au conteneur. */
	ids.push_back(tmp);
}

unsigned int TableDesIdentificateurs::getId(const char* str) {
	for(unsigned int i = 0; i < ids.size(); i++) {
		if(strcmp(ids[i], str) == 0) {
			return i;
		}
	}
}
