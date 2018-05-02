#include "produit.hpp"

//constructeur
Produit::Produit(int id, std::string description):
_id(id),_description(description)
{}

//getter id
int Produit::getId() const
{return _id;}

//getter description
std::string Produit::getDescription() const
{return _description;}

//affichage
void Produit::afficherProduit() const
{
	std::cout << "Produit ("<<_id<<","<<_description<<")\n";
}
