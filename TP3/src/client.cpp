#include "client.hpp"


//constructeur param
Client::Client(int id, std::string nom):
_id(id),_nom(nom)
{}

//getter id
int Client::getId() const
{return _id;}

//getter nom
std::string Client::getNom() const
{return _nom;}

//affichage
void Client::afficherClient() const
{
	std::cout<< "Client ("<<_id<<","<<_nom<<")\n";
}
