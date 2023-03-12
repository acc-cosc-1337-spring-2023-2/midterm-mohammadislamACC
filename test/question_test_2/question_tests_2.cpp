#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify fibonacci sequence")
{
	REQUIRE(get_fib_sequence(5) == 5);
	REQUIRE(get_fib_sequence(7) == 13);
	REQUIRE(get_fib_sequence(10) == 55);
	REQUIRE(get_fib_sequence(12) == 144);
}