#include "catch2/catch.hpp"
#include "../lib/Property.h"

TEST_CASE("Test initalisation of a property")
{
    Property beers(69, "Beers", 169);

    REQUIRE (beers.getName() == "Default");
    REQUIRE (beers.getLocation() == -1);
}
TEST_CASE("Test of the run property functions")
{
    Player tyson = Player("Tyson");
    
    Property beers(69, "Beers", 169);
    
    beers.run(&tyson);
}
