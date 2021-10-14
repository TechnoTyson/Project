#include "catch2/catch.hpp"
#include "../lib/functions.h"

TEST_CASE("Test that a string is converted to all capital letters")
{
    std::string test = "test";
    std::string uppertest;

    uppertest = uppercase(test);

    REQUIRE (uppertest == "TEST");
}