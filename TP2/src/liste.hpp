#ifndef LISTE_HPP
#define LISTE_HPP
 #include <iostream>
struct Noeud
{
	int _valeur;
	Noeud * _suivant;
};

struct Liste
{
	//attribut
	Noeud * _tete;

	//methode
	Liste(); //constructeur
	~Liste(); //destructeur
	void ajouterDevant(int valeur); //ajoute valeur en début de liste
	int getTaille () const; 	//retourne la taille de la liste
	int getElement (int indice) const; //retourne la valeur de l'élément à l'indice donnée
};

#endif
