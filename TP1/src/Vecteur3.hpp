#ifndef VECTEUR3_HPP
#define VECTEUR3_HPP
#include <iostream>
#include <cmath>
class Vecteur
{
	public:
		float x;
		float y;
		float z;
	public:
		Vecteur();
		Vecteur(float x, float y, float z);
		void afficher();
		float norme();
		float scalaire(Vecteur v);
		Vecteur addition(Vecteur v);
};

#endif
