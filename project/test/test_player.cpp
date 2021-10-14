#include "catch2/catch.hpp"
#include "../lib/Player.h"

TEST_CASE("The inital position of a player is 0")
{
    Player beers(std::string ("Tyson"));

    REQUIRE (beers.getName() == "Tyson");
}

TEST_CASE("The position of the player is set to 16")
{
    Player beers(std::string ("Declan"));

    beers.setPosition(16);

    REQUIRE (beers.getPosition() == 16);
}

TEST_CASE("The position of the player passes from 44 back to 4")
{
    Player beers(std::string ("Declan"));

    beers.setPosition(44);

    REQUIRE (beers.getPosition() == 4);
}