#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("roll dice 10 times")
{
	for(int i = 0; i < 10; i++)
	{
		int x = roll_die();
		REQUIRE(x > 0 && x <= 6);
	}
}
