#include "caesar_cipher.h"
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using hackerrank::bmgandre::algorithms::strings::caesar_cipher;

std::string caesar_cipher::solve(std::string input, unsigned char rotate)
{
    std::stringstream str_stream;
    
    auto rotate_letter = [rotate](unsigned char letter, unsigned char min, unsigned char max)
    {
        auto rotate_key = rotate % (max - min + 1);
        if (letter + rotate_key > max)
        {
            return (min - 1 + ((letter + rotate_key) % max));
        }
        else 
        {
            return (letter + rotate_key);
        }
    };
    
	for (auto const letter : input) 
    {
        if (letter >= 'a' && letter <= 'z') 
        {
            str_stream << static_cast<char>(rotate_letter(letter, 'a', 'z'));
        }
        else if (letter >= 'A' && letter <= 'Z')
        {
            str_stream << static_cast<char>(rotate_letter(letter, 'A', 'Z'));
        }
        else
        {
            str_stream << letter;
        }
    }
    
    return str_stream.str();
}
