#include "liste.hpp"


//constructeur
Liste::Liste():
_tete(nullptr)
{}

//destructeur
/* le destructeur permet d'éviter ce que l'on appelle de la fuite de mémoire
 * c'est ce qui arrive lorsque qu'un pointeur, ou un tableau à de la mémoire alloué et que l'on a pas libérer
 * la mémoire qui a été utiliser pour l'un de ces deux objet n'est maintenant plus utilisable
 * cela peut poser un problème si la mémoire utiliser est important, ou si il y a des fuites trop fréquement
 * ca ralentis le système et peut faire crasher la machine
 * */
Liste::~Liste()
{
	/* pour détruire la liste, on va procédé noeud par noeud
	 * pour cela nous aurons besoin de deux pointeur
	 * un pour traverser la liste
	 * l'autre pour supprimer les élément
	 * */
	 Noeud * courant = _tete;
	 Noeud * supprime = _tete;
	 while(courant != nullptr)
	 {
		 courant = courant->_suivant; //on fait avancer le courant
		 delete supprime;	//on supprime le noeud
		 supprime = courant; //on fait avancer le pointeur de suppression
	 }
}

//ajoute valeur en début de liste
void Liste::ajouterDevant(int valeur)
{
	/* puisque la liste marche avec des pointeur, il est préférable de déclarer nouv en tant que pointeur
	 * mais pour créer véritablement un objet noeud, il faut utiliser la fonction new
	 * puisque noeud est une structure, on peut utiliser {} pour initialiser ses valeurs
	 */

	Noeud *nouv = new Noeud{valeur,_tete};	// on créer un nouveau noeud, dont le noeud suivant est la tete de la liste
	_tete = nouv;	//ce nouveau noeud est maintenant la tete de la liste
}


//retourne la taille de la liste
int Liste::getTaille () const
{
	/*on déclare un pointeur courant, qui va traverser toute la liste,
	 * à chaque fois qu'il se déplace, on incrémente le compteur
	 * */

	Noeud * courant = _tete;
	int cpt = 0;
	while(courant != nullptr)
	{
		courant = courant->_suivant;
		cpt++;
	}
	return cpt;
}


//retourne la valeur de l'élément à l'indice donnée
int Liste::getElement(int indice) const
{
	/*on vérifie que l'indice donnée se trouve bien entre 0 et taille-1
	 * si ce n'est pas le cas, on retourne -1 pour indiquer qu'ils y a une erreur d'utilisation
	 * */

	 if(indice <0 or indice>getTaille()-1)
		return -1;

	/* on parcoure la liste, et à chaque étape, on décrémente l'indice
	 * une fois que l'indice est à 0, le pointeur est sur le bon élément
	 * il ne reste plus qu'à retourner la valeur
	 * */

	Noeud * courant =_tete;
	while(indice > 0)
	{
		courant = courant->_suivant;
		--indice;
	}
	return courant->_valeur;
}
