#include <catch2/catch.hpp>
#include <Player.h>
 
TEST_CASE("The inital position of a player is 0")
{
    Player beers;
        REQUIRE
        (
            beers.getPosition() == 0
        );
}