#include <functional>
#include <CppUTest/CommandLineTestRunner.h>

// fichiers de tests unitaires des différents modules
#include "Vecteur2d_test.hpp"

int main(int argc, char ** argv) {
   return CommandLineTestRunner::RunAllTests(argc, argv);
}

