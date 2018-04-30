#include <iostream>
#include "liste.hpp"

int main ()
{
	/* un pointeur est une variable qui stocke une adresse
	 * un pointeur peut :
	 * -modifier une variable (*p=10)
	 * -changer la variable qu'elle pointe (p=&var)
	 * -créer une variable (p = new <type>)
	 * -supprimer une variable (delete p)

	int a;
	a = 42;
	int *p;
	p = &a;
	*p =37;
	std::cout<< *p;*/

	/*______________________________________________________________________________*/

	/*l'allocation dynamique permet d'augmenter ou de réduire la taille d'un tableau
	 * on peut utiliser malloc ou new pour lui donner sa taille de base
	 * on utilise realloc pour augmenter sa taille

	/*allocation:
	 * malloc doit être cast dans la type du pointeur (ici int*)
	 * le paramètre est donner en byte, c'est pour cela qu'on utilise la fonction sizeof
	 * on dit qu'on donne a t un tableau de 10*(taille d'une addresse de int)

	int *t;
	t = (int *) malloc (10 * sizeof(*t));
	//t = new int[10];

	/*on met dans la case 3 de notre tableau le nombre 42

	t[3]=42;
	std::cout << t[3]<<'\n';

	/*reallocation:
	 * on veut maintenant augmenter la taille de notre tableau
	 * nous utiliserons la fonction realloc, qui fonctionne d'une manière très similaire a malloc
	 * il faut cast dans le bon type, donner la taille en byte, la seul différence est qu'il y a un paramètre supplémentaire
	 * ce pointeur est la cible sur laquelle on va faire la réallocation
	 * si on augmente la taille, les valeurs déja initialiser ne sont pas supprimer


	t = (int *) realloc (t,11 * sizeof(*t));
	std::cout << t[3]<<'\n';
	t[11]=4;
	std::cout << t[11]<<'\n';

	/*desallouer:
	 * lorsque le tableau n'est plus utiliser, ils faut rendre la mémoire
	 * cela supprime toute la mémoire (et donc la valeurs) donner au pointeur
	 * pour le rendre utilisable il faut le repointer ou allouer de la mémoire
	 * si on ne veut plus utiliser le pointeur, delete fait la même chose en plus de supprimer le pointeur

	free(t);
	t = nullptr;

	/* /!\ toute ces fonctions n'ont de réel intéret qu'en C, en C++, on utiliseras plutot un vecteur /!\ */
	Liste l;
	l.ajouterDevant(2);
	l.ajouterDevant(45);
	std::cout <<"taille de la liste : "<< l.getTaille() <<'\n';
	std::cout <<"valeur de l'élément 1 : "<< l.getElement(0) <<'\n';
	std::cout <<"valeur de l'élément 2 : "<< l.getElement(1) <<'\n';
	std::cout <<"recherche à un indice incorecte : "<< l.getElement(10) <<'\n';
	return 0;
}
