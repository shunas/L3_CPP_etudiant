#include "Vecteur3.hpp"

Vecteur::Vecteur():
x(0), y(0), z(0)
{}

Vecteur::Vecteur(float x, float y, float z):
x(x), y(y), z(z)
{}

void Vecteur::afficher()
{
	std::cout <<'('<<x<<','<<y<<','<<z<<')'<<'\n';
}
/*calcule de la norme
 * sqrt(x² + y² + z²)
 * */
float Vecteur::norme()
{
	return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
}

/*calcule du scalaire U.V
 * Ux*Vx + Uy*Vy + Uz*Vz
 * */
float Vecteur::scalaire(Vecteur v)
{
	return x*v.x + y*v.y + z*v.z;
}

/*On renvoie un vecteur qui correspond au vecteur somme*/
Vecteur Vecteur::addition(Vecteur v)
{
	return Vecteur(x+v.x, y+v.y, z+v.z);
}
