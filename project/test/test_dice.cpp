#include "catch2/catch.hpp"
#include "../lib/functions.h"

TEST_CASE("Test that dice roles are within 0 and 12")
{
    int roll1, roll2, roll3;
    roll1 = dice();
    roll2 = dice();
    roll3 = dice();

    REQUIRE (roll1 >= 0);
    REQUIRE (roll1 <= 12);
    REQUIRE (roll2 >= 0);
    REQUIRE (roll2 <= 12);
    REQUIRE (roll3 >= 0);
    REQUIRE (roll3 <= 12);
}
