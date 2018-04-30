#include <CppUTest/CommandLineTestRunner.h>
#include "Fibonacci.hpp"

TEST_GROUP(GroupFibonacci) { };

TEST(GroupFibonacci, Fibonacci_recursif)
{
	Fibonacci f;
	CHECK(f.recursif(1) == 1);
	CHECK(f.recursif(2) == 1);
	CHECK(f.recursif(3) == 2);
	CHECK(f.recursif(4) == 3);
	CHECK(f.recursif(5) == 5);
}

TEST(GroupFibonacci, Fibonacci_iteratif)
{
	Fibonacci f;
	CHECK(f.iteratif(1) == 1);
	CHECK(f.iteratif(2) == 1);
	CHECK(f.iteratif(3) == 2);
	CHECK(f.iteratif(4) == 3);
	CHECK(f.iteratif(5) == 5);
}
