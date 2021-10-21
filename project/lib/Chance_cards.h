#pragma once
#include <iostream>
#include <string>



class Chance_cards{


    // Private Variables
    int location;
    std::string output;
    std::string reaction;
    int fund_reaction;

    //public variables

    public:

    Chance_cards();

    // Setting values to variables
    void set_location(int);
    void set_output(std::string);
    void set_reaction(std::string);
    void set_fund_reaction(int);

    // getting values from variables 
    int get_location();
    std::string get_output();
    std::string get_reaction();
    int get_fund_reaction();

};