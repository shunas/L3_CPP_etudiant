#ifndef MAGASIN_HPP
#define MAGASIN_HPP
#include <vector>
#include <string>
#include "location.hpp"
#include "produit.hpp"
#include "client.hpp"

class Magasin
{
	private:
		int _idCourantProduit;	//garde en mémoire le dernier _idProduit attribuer
		int _idCourantClient;	//garde en mémoire le dernier _idClient attribuer
		std::vector <Client> _clients;
		std::vector <Produit> _produits;
		std::vector <Location> _locations;
	public:
		Magasin();	//constructeur
		int nbClients() const ;	//nombre de client du magasin
		void ajouterClient(std::string const & nom);	//ajoute un client au magasin
		void afficherClients() const;	//affiche tous les clients du magasin
		void supprimerClient(int idClient);	//supprime le client dont l'id est passer en paramètre
		int nbProduits() const ;	//nombre de produits du magasin
		void ajouterProduit(std::string const & nom);	//ajoute un produit au magasin
		void afficherProduits() const;	//affiche tous les produits du magasin
		void supprimerProduits(int idProduit);	//supprime le produit dont l'id est passer en paramètre

};

#endif
