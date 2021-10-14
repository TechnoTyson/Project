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

TEST_CASE("Check that dice roles different values each time")
{
    int roll1, roll2, roll3, roll4, roll5, roll6, roll7, roll8;
    roll1 = dice();
    roll2 = dice();
    roll3 = dice();
    roll4 = dice();
    roll5 = dice();
    roll6 = dice();
    roll7 = dice();
    roll8 = dice();
    bool success = true;
    if (roll1 == roll2 == roll3 == roll4 == roll5 == roll6 == roll7 == roll8)
    {
        success = false;
    }
    REQUIRE(success == true);
}