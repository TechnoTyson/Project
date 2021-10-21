#include "functions.h"

int main()
{

    int true_position;

    //Generate the board
    std::vector<Tile*> board = generate_board();
    //Welcome message to the player
    std::cout << "Welcome to Monopoly" << std::endl;

    //Get user input for the username
    std::string* username = new std::string;
    std::cout << "Please enter your username:" << std::endl;
    std::cin >> *username;
    
    //Create a new player with the given username
    Player* player = new Player(*username);

    //Free memory for username
    delete username;
    
    //Let user know how to end the game
    std::cout << "You can exit the game at anytime by entering end as an input." << std::endl;
    std::cout << "Entering properties as an input will dispaly all properties you own." << std::endl << std::endl;
    //Define string for input
    std::string user_input;
    //Define int for dice roll
    int move;
    //Run loop while input does not = end
    do 
    {
        //Print out players current position and account balance
        std::cout << player->getName() << ", you are currently on " << board[player->getPosition()]->getName() << std::endl;
        std::cout << "Your account balance is : " << player->getBalance() << std::endl;

        //Get user input to roll the dice in while loop
        do
        {
            std::cout << "Enter 'roll' to roll the dice or 'properties' to display your owned properties." << std::endl;
            std::cin >> user_input;
            //Convert user input to capital letters
            user_input = uppercase(user_input);
            //Check if user wants game to end
            if (user_input == "END")
            {
                std::cout << "Thanks for playing!" << std::endl;
                //Free memory
                board.clear();
                delete player;
                //Return to exit game
                return 0;
            }
            //If user wants to output properties
            else if (user_input == "PROPERTIES")
            {
                //Run function to output properties
                player->outputProperties();
            }
        } 
        while (user_input != "ROLL");

        true_position = player->getPosition()+dice();

        if (true_position > 40)
        {

            Go* temp = (Go*)board[0];
            temp->pass_go(player);
            //board[0]->pass_go();

        }
        //Roll dice and add to players position
        player->setPosition(true_position);

        //Run the tiles function that has been landed on the board
        board[player->getPosition()]->run(player);

        //Add in new line
        std::cout << std::endl;
    }   
    while (user_input != "END");
    //Free memory
    board.clear();
    delete player;
    
    //Return 0;
    return 0;
}