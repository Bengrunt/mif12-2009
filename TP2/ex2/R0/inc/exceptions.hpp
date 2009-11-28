#ifndef EXCEPTIONS_DEF
#define EXCEPTIONS_DEF

/**
 * Classe d'exception d'un type inconnu.
 */
class UnknownBasicTypeException {
	public:
		/** Message d'erreur à retourner. */
		const char* what() const throw();
};
/**
 * Classe d'exception pointeur null
 */
class NullPointerException {
	public:
		/** Message d'erreur à retourner. */
		const char* what() const throw();
};

class AllocationException {
	public:
		/** Message d'erreur à retourner. */
		const char* what() const throw();
};

#endif
