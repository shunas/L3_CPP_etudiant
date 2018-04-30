#include <iostream>
#include "Fibonacci.hpp"
#include "Vecteur3.hpp"

/* Compilation en une ligne:
 * g++ main.cpp Fibonacci.cpp (-o main)
 *
 * Compilation en plusieurs ligne:	/!\ attention à l'ordre, main.cpp inclue Fibonacci.hpp, donc Fibonacci.cpp doit être compiler avant
 * g++ -c Fibonacci.cpp
 * g++ -c main.cpp
 * g++ main.o Fibonacci.o
 * */

int main()
{
	Vecteur test(2,3,6);
	Vecteur test2(4,0,1);
	test.afficher();

	std::cout<<test.norme()<<'\n';

	std::cout<<test.scalaire(test2) <<'\n';

	test.addition(test2).afficher();
	/*	En moin compact:
	 * 	Vecteur a;
	 * 	a = test.addition(test2);
	 * 	a.afficher()*/

	return 0;
}
