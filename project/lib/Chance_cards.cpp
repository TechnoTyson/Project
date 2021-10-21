#include "Chance_cards.h"


Chance_cards::Chance_cards(){

    

}

// taking inputs from function and setting them as variable

void Chance_cards::set_location(int location){

    this -> location = location;

}

void Chance_cards::set_output(std::string output){

    this -> output = output;


}

void Chance_cards::set_reaction(std::string reaction){

    this -> reaction = reaction;


}

void Chance_cards::set_fund_reaction(int fund_reaction){

    this -> fund_reaction = fund_reaction;


}

// Getting values from private variables

int Chance_cards::get_location(){

    return location;

}

std::string Chance_cards::get_output(){

    return output;

}

std::string Chance_cards::get_reaction(){

    return reaction;

}

int Chance_cards::get_fund_reaction(){

    return fund_reaction;

}



