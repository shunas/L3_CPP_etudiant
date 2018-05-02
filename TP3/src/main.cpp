#include <iostream>
#include "location.hpp"
#include "client.hpp"
#include "produit.hpp"
#include "magasin.hpp"

int main()
{
	/*pour initialiser une structure en même temps que pour l'instancier :
	 * NomStructure maStructure {param}
	 * à ne pas confondre avec les classes, ou on utilise des () au lieu des {}
	 * */
	 Location l{0,2};
	 l.afficherLocation();
	 Client c(51,"Zohra");
	 c.afficherClient();
	 Produit p(64,"c'est un beau produit");
	 p.afficherProduit();
	 Magasin m;
	 m.ajouterClient("Zohra");
	 m.ajouterClient("Jimmy");
	 m.ajouterClient("toto");
	 m.supprimerClient(2);
	 m.afficherClients();

	 m.ajouterProduit("PQ");
	 m.ajouterProduit("pomme");
	 m.ajouterProduit("Always discreet");
	 m.supprimerProduits(2);
	 m.afficherProduits();
	return 0;
}
