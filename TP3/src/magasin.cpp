#include "magasin.hpp"

//constructeur
Magasin::Magasin():
_idCourantProduit(0),_idCourantClient(0)
{}


//nombre de client du magasin
int Magasin::nbClients() const
{
	return _clients.size();
}


//ajoute un client au magasin
void Magasin::ajouterClient(std::string const & nom)
{
	/* ne pas oublier de mettre à jour _idcourant qui garde en mémoire le dernier id en mémoire
	 * on veut que chaque client ais un id unique
	 * on utilise directement le constructeur de client dans le push_back
	 * cela évite d'avoir une variable intermédiaire
	 * */

	 ++_idCourantClient;
	 _clients.push_back(Client(_idCourantClient,nom));
}


//affiche tous les clients du magasin
void Magasin::afficherClients() const
{
	/* on va réutilisser la fonction afficherClient que l'on as déja créer dans client.cpp
	 * ici, on n'as pas besoin d'avoir un indice, donc il n'y a pas d'intéret d'utiliser un for normal
	 * puisque l'on à un conteneur (tableau, vecteur, map, ...) on peut utiliser ce que l'on appel un range-based loop
	 * la syntax est la suivante:
	 * for(contenant : conteneur)
	 * notre conteneur est _clients, notre contenant seras une variable que l'on va nommer c
	 * on utilise le type auto pour c, le compilateur va alors de lui même déduire le bon type
	 * on passe c par référence, cela évite d'avoir une copie d'objet à chaque itération, seul l'adresse est copier, plus sympas pour le pc
	 * */

	for(auto & c : _clients)
	{
		c.afficherClient();
	}
}
//supprime le client dont l'id est passer en paramètre
void Magasin::supprimerClient(int idClient)
{
	/* Ici, deux solution, la 1er consiste à chercher l'élément puis d'utiliser la fonction erase
	 * mais cette fonction est très couteuse, car elle doit ensuite "boucher" le trou
	 * elle le fait en décalant tous les élément de 1 case, sur un très grand vecteur ca peut prendre du temps
	 * l'autre méthode consiste à utiliser swap sur l'élément a supprimer et le dernier élément du vecteur
	 * ainsi l'élément à supprimer est le dernier élément du vecteur
	 * il ne reste qu'a faire un pop_back, qui supprime le dernier élément du vecteur
	 * */

	 for (auto & c : _clients)
	 {
		if (c.getId() == idClient)
		{
			std::swap(c,_clients.back());
			_clients.pop_back();
			break;
		}
	 }
}



//nombre de produits du magasin
int Magasin::nbProduits() const
{
	return _produits.size();
}


//ajoute un produit au magasin
void Magasin::ajouterProduit(std::string const & nom)
{
	 ++_idCourantProduit;
	 _produits.push_back(Produit(_idCourantProduit,nom));
}


//affiche tous les clients du magasin
void Magasin::afficherProduits() const
{
	for(auto & p : _produits)
	{
		p.afficherProduit();
	}
}
//supprime le client dont l'id est passer en paramètre
void Magasin::supprimerProduits(int idProduit)
{
	 for (auto & p : _produits)
	 {
		if (p.getId() == idProduit)
		{
			std::swap(p,_produits.back());
			_produits.pop_back();
			break;
		}
	 }
}







