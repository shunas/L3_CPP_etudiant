#include <CppUTest/CommandLineTestRunner.h>
#include "magasin.hpp"

TEST_GROUP(GroupMagasin)
{
	Magasin *m;

	void setup()
	{
		m = new Magasin();
	}

	void teardown()
	{
		delete m;
	}
};

TEST(GroupMagasin,nbClient)
{
	m->ajouterClient("toto");
	m->ajouterClient("tata");
	m->ajouterClient("titi");
	CHECK_EQUAL(3,m->nbClients());
}

TEST(GroupMagasin,supprimerClient)
{
	m->ajouterClient("toto");
	m->ajouterClient("tata");
	m->ajouterClient("titi");
	m->supprimerClient(2);
	CHECK_EQUAL(2,m->nbClients());
}

TEST(GroupMagasin,nbProduits)
{
	m->ajouterProduit("toto");
	m->ajouterProduit("titi");
	m->ajouterProduit("tata");
	CHECK_EQUAL(3,m->nbProduits());
}

TEST(GroupMagasin,supprimerProduits)
{
	m->ajouterProduit("toto");
	m->ajouterProduit("titi");
	m->ajouterProduit("tata");
	m->supprimerProduits(2);
	CHECK_EQUAL(2,m->nbProduits());
}
