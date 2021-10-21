#include "catch2/catch.hpp"
#include "../lib/functions.h"

TEST_CASE("Test that 40 tiles are generated correctly")
{
    std::vector<Tile*> board = generate_board();

    REQUIRE(board.size() == 40);
}