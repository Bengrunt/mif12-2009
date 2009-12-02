#include "Program.hpp"

/* Constructeur. */
Program::Program() {}

/* Destructeur. */
Program::~Program() {}

/* Accesseurs. */
char* Program::getCategory() const {
	return (char*) "program";
}

char* Program::getAttributes() const {
	return (char*) "";
}
