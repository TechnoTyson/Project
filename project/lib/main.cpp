#include "functions.h"

int main()
{
    //Create new player
    Player Declan = Player("Declan");
    //Run generate board function
    std::vector<Tile> board = generate_board();
    //Pretend dice role of 3
    Declan.setPosition(Declan.getPosition()+3);
    std::cout << Declan.getName() << " has landed on tile number " << board[Declan.getPosition()].getLocation() << std::endl;
    std::cout << "Would you like to buy this property" << std::endl;
    
    return 0;
}