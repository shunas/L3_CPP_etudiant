#include "Doubler.hpp"

TEST(TestGroup, Doubler_test1) 
{ 
    CHECK_EQUAL(doubler(21), 42);
}

TEST(TestGroup, Doubler_test2) 
{
    CHECK_EQUAL(doubler(0), 0);
}

