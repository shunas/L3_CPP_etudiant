#include <iostream>
#include "location.hpp"
#include "client.hpp"

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
	return 0;
}
