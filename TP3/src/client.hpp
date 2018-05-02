#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include <string>

class Client
{
	private:
		int _id;
		std::string _nom;
	public:
		Client(int id, std::string nom);	//constructeur param
		int getId() const;	//getter id
		std::string getNom() const;	//getter nom
		void afficherClient()const ;	//affichage
};

#endif
