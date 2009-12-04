README.txt MIF12 - Compilateur Pascal
--------------------------------------

Faute de temps, nous n'avons malheureusement pas eu le temps de finir le développement du compilateur.
Toutefois nous tenions quand même à vous envoyer notre travail.

	Emmanuel Gaude & Benjamin Guillon

Etat du développement rendu :
-----------------------------

Nous avons fait un makefile complet.

Ce que nous avons implémenté :
	
	* Table des identificateurs
	* Table des symboles
	* Types simples
	* Types construits
	   -> Pointeurs
	   -> Tableaux
	   -> Intervalles
	
Ce que nous n'avons pas implémenté :
	
	* Fonctions et procédures	
	* Définition de types utilisateurs
	* Gestion des instructions
	* Génération du fichier XML
	
Bugs rencontrés :
-----------------
	* Certaines règles de la grammaire n'ayant pas d'actions associées, celles-ci affichent un avertissement à la génération du parser.cpp. Bien évidemment cela est sans grandes conséquences. ;)
	* Nous avons rencontré un gros problème dans la grammaire avec la règle `Type -> TOK_IDENT`. Bien que cette règle ne soit jamais vérifiée dans notre fichier de test, sa présence posa problème dans la gestion de bornes "identificateurs" des types intervalles. En effet, la règle `Interbase -> TOK_IDENT` matchait sur `..` alors que l'expression régulière correspondant est `[a-zA-Z][a-zA-Z0-9]*`.
	  Nous n'avons pu la résoudre autrement qu'en commentant la règle `Type -> TOK_IDENT`, ce qui poserait problème par la suite dans la définition de types utilisateurs.

Exécution :
-----------
Pour lancer l'exécution tapez `make exec`.
Pour nettoyer complètement tapez `make eradicator`.