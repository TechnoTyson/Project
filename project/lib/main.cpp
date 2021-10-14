#include "functions.h"

int main()
{
    //Create new player
    Player Declan = Player("Declan");
    //Run generate board function
    std::vector<Tile*> board = generate_board();
    //Pretend dice role of 3
    Declan.setPosition(Declan.getPosition()+3);
    board[Declan.getPosition()]->run(&Declan);

    return 0;
}