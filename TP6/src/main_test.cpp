#include <CppUTest/CommandLineTestRunner.h>

// fichiers de tests unitaires des différents modules
#include "Livre_test.hpp"
#include "Bibliotheque_test.hpp"

int main(int argc, char ** argv)
{
   return CommandLineTestRunner::RunAllTests(argc, argv);
}
