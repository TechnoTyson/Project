#include "catch2/catch.hpp"
#include "../lib/functions.h"

TEST_CASE("Test that gaol sets player position to gaol tile")
{
    Player beers(std::string ("Declan"));
    
    beers.setPosition(23);

    Go_to_gaol gaol = Go_to_gaol();

    gaol.run(&beers);

    REQUIRE(beers.getPosition() == 10);
}
