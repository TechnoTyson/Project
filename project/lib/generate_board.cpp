#include "Tile.h"
#include "Player.h"
#include "Property.h"
#include "Go.h"
#include "Chance.h"
#include "Go_to_gaol.h"
#include "Tax.h"
#include "Gaol.h"
#include "Free_parking.h"

std::vector<Tile*> generate_board()
{
    //Create vector of tiles
    std::vector<Tile*> board;
    //Put 40 tiles in vector
    //Change values for tile one the Go tile
    Go *tile1 = new Go();
    tile1->setLocation(1);
    tile1->setName("Go");
    //Add tile to vector
    board.push_back(tile1);

    //Tile 2
    Property *tile2 = new Property(60, "Brown", 2);
    tile2->setLocation(2);
    tile2->setName("Alcohol Free Pale Ale");
    board.push_back(tile2);
    
    //Tile3
    Chance *tile3 = new Chance();
    tile3->setLocation(3);
    tile3->setName("Chance 1");
    board.push_back(tile3);

    //Tile 4
    Property *tile4 = new Property(60, "Brown", 4);
    tile4->setLocation(4);
    tile4->setName("Larger");
    board.push_back(tile4);

    //Tile 5
    Tax *tile5 = new Tax(200);
    tile5->setLocation(5);
    tile5->setName("Business Tax");
    board.push_back(tile5);

    //Tile 6
    Property *tile6 = new Property(200, "Station", 25);
    tile6->setLocation(6);
    tile6->setName("Pirate Life");
    board.push_back(tile6);

    //Tile 7
    Property *tile7 = new Property(100, "Blue", 6);
    tile7->setLocation(7);
    tile7->setName("Pilsner");
    board.push_back(tile7);
    
    //Tile 8
    Chance *tile8 = new Chance();
    tile8->setLocation(8);
    tile8->setName("Chance 2");
    board.push_back(tile8);

    //Tile 9
    Property *tile9 = new Property(100, "Blue", 6);
    tile9->setLocation(9);
    tile9->setName("American Pale");
    board.push_back(tile9);

    //Tile 10
    Property *tile10 = new Property(120, "Blue", 8);
    tile10->setLocation(10);
    tile10->setName("West Coast IPA");
    board.push_back(tile10);

    //Tile 11
    Gaol *tile11 = new Gaol();
    tile11->setLocation(11);
    tile11->setName("Gaol");
    board.push_back(tile11);

    //Tile 12
    Property *tile12 = new Property(140, "Purple", 10);
    tile12->setLocation(12);
    tile12->setName("Sour NEIPA");
    board.push_back(tile12);

    //Tile 13
    Property *tile13 = new Property(150, "Utility", 10);
    tile13->setLocation(13);
    tile13->setName("Grain Supplier");
    board.push_back(tile13);

    //Tile 14
    Property *tile14 = new Property(140, "Purple", 10);
    tile14->setLocation(14);
    tile14->setName("Hibiscus Sour");
    board.push_back(tile14);

    //Tile 15
    Property *tile15 = new Property(160, "Purple", 12);
    tile15->setLocation(15);
    tile15->setName("Imperial Sour");
    board.push_back(tile15);

    //Tile 16
    Property *tile16 = new Property(200, "Station", 25);
    tile16->setLocation(16);
    tile16->setName("Coopers");
    board.push_back(tile16);

    //Tile 17
    Property *tile17 = new Property(180, "Orange", 14);
    tile17->setLocation(17);
    tile17->setName("Session Ale");
    board.push_back(tile17);

    //Tile 18
    Chance *tile18 = new Chance();
    tile18->setLocation(18);
    tile18->setName("Chance 3");
    board.push_back(tile18);

    //Tile 19
    Property *tile19 = new Property(180, "Orange", 14);
    tile19->setLocation(19);
    tile19->setName("Session IPA");
    board.push_back(tile19);

    //Tile 20
    Property *tile20 = new Property(200, "Orange", 16);
    tile20->setLocation(20);
    tile20->setName("Session Pale");
    board.push_back(tile20);

    //Tile 21
    Free_parking *tile21 = new Free_parking();
    tile21->setLocation(21);
    tile21->setName("Free_parking");
    board.push_back(tile21);

    //Tile 22
    Property *tile22 = new Property(220, "Red", 18);
    tile22->setLocation(22);
    tile22->setName("Hefe Weissbier");
    board.push_back(tile22);

    //Tile 23
    Chance *tile23 = new Chance();
    tile23->setLocation(23);
    tile23->setName("Chance 4");
    board.push_back(tile23);

    //Tile 24
    Property *tile24 = new Property(220, "Red", 18);
    tile24->setLocation(24);
    tile24->setName("Schwarzbier");
    board.push_back(tile24);

    //Tile 25
    Property *tile25 = new Property(240, "Red", 20);
    tile25->setLocation(25);
    tile25->setName("Fiestbier");
    board.push_back(tile25);

    //Tile 26
    Property *tile26 = new Property(200, "Station", 25);
    tile26->setLocation(26);
    tile26->setName("West End");
    board.push_back(tile26);

    //Tile 27
    Property *tile27 = new Property(260, "Yellow", 22);
    tile27->setLocation(27);
    tile27->setName("Chocolate Porter");
    board.push_back(tile27);
    
    //Tile 28
    Property *tile28 = new Property(260, "Yellow", 22);
    tile28->setLocation(28);
    tile28->setName("Black IPA");
    board.push_back(tile28);

    //Tile 29
    Property *tile29 = new Property(150, "Utility", 10);
    tile29->setLocation(29);
    tile29->setName("Keg Supplier");
    board.push_back(tile29);

    //Tile 30
    Property *tile30 = new Property(280, "Yellow", 24);
    tile30->setLocation(30);
    tile30->setName("Imperial Stout");
    board.push_back(tile30);

    //Tile 31
    Go_to_gaol *tile31 = new Go_to_gaol();
    tile31->setLocation(31);
    tile31->setName("Go_to_gaol");
    board.push_back(tile31);

    //Tile 32
    Property *tile32 = new Property(300, "Green", 26);
    tile32->setLocation(32);
    tile32->setName("Hazy Pale");
    board.push_back(tile32);

    //Tile 33
    Property *tile33 = new Property(300, "Green", 26);
    tile33->setLocation(33);
    tile33->setName("Oat Cream Pale");
    board.push_back(tile33);


    //Tile 34
    Chance *tile34 = new Chance();
    tile34->setLocation(34);
    tile34->setName("Chance 5");
    board.push_back(tile34);

    //Tile 35
    Property *tile35 = new Property(320, "Green", 28);
    tile35->setLocation(35);
    tile35->setName("Hazy IPA");
    board.push_back(tile35);

    //Tile 36
    Property *tile36 = new Property(200, "Station", 25);
    tile36->setLocation(36);
    tile36->setName("Uradila");
    board.push_back(tile36);

    //Tile 37
    Chance *tile37 = new Chance();
    tile37->setLocation(37);
    tile37->setName("Chance 6");
    board.push_back(tile37);

    //Tile 38
    Property *tile38 = new Property(350, "Dark Blue", 35);
    tile38->setLocation(38);
    tile38->setName("IPA");
    board.push_back(tile38);

    //Tile 39
    Tax *tile39 = new Tax(100);
    tile39->setLocation(39);
    tile39->setName("Alcohol Tax");
    board.push_back(tile39);

    //Tile 40
    Property *tile40 = new Property(400, "Dark Blue", 50);
    tile40->setLocation(40);
    tile40->setName("IIPA");
    board.push_back(tile40);

    //Return the created board
    return board;
}