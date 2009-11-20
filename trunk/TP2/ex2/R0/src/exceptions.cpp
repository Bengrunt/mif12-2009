#include "exceptions.h"

const char* UnknownBasicTypeException::what() const throw() {
	return "Probleme : Type de base inconnu !";
}

const char* NullPointerException::what() const throw() {
	return "Probleme : pointeur NULL rencontré !";
}

const char* AllocationException::what() const throw() {
	return "Probleme rencontre lors de l'allocation !";
}
