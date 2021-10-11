#include "catch2/catch.hpp"
#include "../lib/Tile.h"

TEST_CASE("Test initalisation of a tile")
{
    Tile beers(69, "Beers");

    REQUIRE (beers.getName() == "Beers");
    REQUIRE (beers.getLocation() == 69);
}