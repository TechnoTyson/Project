#include <string>
#include <cctype>

std::string uppercase(std::string input)
{
    //Run loop for length of the string
    for (int i = 0; i < input.length(); i++)
    {
        //Convert each char to uppercase
        input[i] = toupper(input[i]);
    }
    //Return the new converted string
    return input;
}