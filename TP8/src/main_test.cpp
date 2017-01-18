
#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(TestGroup) { };

// fichiers de tests unitaires des différents modules
#include "Bouteille_test.hpp"
#include "Inventaire_test.hpp"

int main(int argc, char ** argv)
{
    return CommandLineTestRunner::RunAllTests(argc, argv);
}

