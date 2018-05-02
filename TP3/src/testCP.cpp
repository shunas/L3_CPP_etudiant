#include <CppUTest/CommandLineTestRunner.h>
#include "client.hpp"
#include "produit.hpp"

/* Dans un TEST_GROUP, on peut définir un setup,
 * c'est a dire qu'avant de faire tout les test de ce groupe, il va faire toute ces action,
 * ici par exemple, on déclare un objet client qui va nous servir après chaque test
 * a noter, il faut déclarer un pointeur hors de la fonction setup, on créer l'objet avec new
 *
 * de la même manière, la fonction teardown seras appeller après le test,
 * ici on va delete l'objet pour éviter les fuites mémoire
 *
 * /!\ 	setup et teardown sont appeller à CHAQUE test, donc ici par exemple,
 * 		si je modifie mon client dans testId, les changement ne seront pas présent dans testName
 *
 * 		setup()
 * 		testID
 * 		teardown()
 * 		setup()
 * 		testName
 * 		teardown()
 * */


TEST_GROUP(GroupClient)
{
	Client * c;

	void setup()
	{c=new Client(42,"toto");}

	void teardown()
	{delete c;}
};

TEST(GroupClient,testId)
{
	CHECK_EQUAL(42,c->getId());
}

TEST(GroupClient, testName)
{
	CHECK_EQUAL("toto",c->getNom());
}


TEST_GROUP(GroupProduit)
{
	Produit * p;
	void setup()
	{p=new Produit(24,"tata");}

	void teardown()
	{delete p;}
};

TEST(GroupProduit,testId)
{
	CHECK_EQUAL(24,p->getId());
}

TEST(GroupProduit,testDescription)
{
	CHECK_EQUAL("tata",p->getDescription());
}




