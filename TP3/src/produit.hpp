#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <iostream>
#include <string>

class Produit
{
	private:
		int _id;
		std::string _description;

	public:
		Produit(int id, std::string description);	//constructeur
		int getId() const;	//getter id
		std::string getDescription() const;	//getter description
		void afficherProduit() const;	//affichage

};

#endif
