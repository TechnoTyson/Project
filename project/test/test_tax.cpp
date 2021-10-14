#include "catch2/catch.hpp"
#include "../lib/Tax.h"

TEST_CASE("Test that tax takes out correct value of money")
{
    Player beers(std::string ("Tyson"));
    beers.setBalance(400);
    Tax taxtile = Tax(200);
    taxtile.run(&beers);

    REQUIRE(beers.getBalance() == 200);
}
