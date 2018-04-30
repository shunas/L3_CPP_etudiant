#include "Fibonacci.hpp"

/* la suite de fibonacci est celle ci :
 * 1 1 2 3 5 8 13 21 
 * dont le nombre suivant est égale à la somme des 2 nombre précédent
 * on commence le compteur à deux car on définie de nous meme les 2 première valeur de la suite avec r1=1 et r=1*/
int Fibonacci::iteratif(int iteration)
{
	int cpt=2;
	int r1=1;
	int r2=1;
	while(iteration > cpt)
	{
		if(r1>r2)
			r2 += r1;
		else
			r1 += r2;
		cpt++;
	}
	return std::max(r1,r2);
}

/* le n nombre de fibonacci est définie par : n = (n-1) + (n-2) */
int Fibonacci::recursif(int iteration)
{
	if(iteration <= 2)
		return 1;
	else
		return recursif(iteration-1) + recursif(iteration-2);
}
