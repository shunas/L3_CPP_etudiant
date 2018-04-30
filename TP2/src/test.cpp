#include <CppUTest/CommandLineTestRunner.h>
#include "liste.hpp"

TEST_GROUP(GroupListe) { };

TEST(GroupListe,ajouterDevanttest)
{
	Liste l;
	l.ajouterDevant(5);
	CHECK(l._tete->_valeur == 5);
}

TEST(GroupListe,getTailletest)
{
	Liste l;
	l.ajouterDevant(1);
	l.ajouterDevant(2);
	l.ajouterDevant(3);
	CHECK(l.getTaille() == 3);
}

TEST(GroupListe,getElementOk)
{
	Liste l;
	l.ajouterDevant(1);
	l.ajouterDevant(2);
	l.ajouterDevant(3);
	l.ajouterDevant(4);
	CHECK(l.getElement(1)==3);
}

TEST(GroupListe,getElementKO)
{
	Liste l;
	CHECK(l.getElement(1)==-1);
}

