#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("Verify palindrome")
{
	REQUIRE(is_palindrome("abcba") = TRUE);
	REQUIRE(is_palindrome("abc") = FALSE);
	REQUIRE(is_palindrome("hannah") = TRUE);
	REQUIRE(is_palindrome("hanna") = FALSE);
}