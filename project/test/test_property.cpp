#include "catch2/catch.hpp"
#include "../lib/Property.h"

TEST_CASE("Test initalisation of a property")
{
    Property beers(69, "Beers", 169);

    REQUIRE (beers.getName() == "Default");
    REQUIRE (beers.getLocation() == -1);
}
