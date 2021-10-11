#include "catch2/catch.hpp"
#include "../lib/Player.h"

TEST_CASE("The inital position of a player is 0")
{
    Player beers(std::string ("Tyson"));

    REQUIRE (beers.getName() == "Tyson");
}
