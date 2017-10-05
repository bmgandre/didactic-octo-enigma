#include "valid_pan_format.h"
#include <iostream>
#include <string>
#include <regex>

using namespace hackerrank::bmgandre::algorithms::regex;

void valid_pan_format::run()
{
    int test_cases;
    std::cin >> test_cases;

    std::regex pan_regex("^[A-Z]{5}[0-9]{4}[A-Z]$", std::regex::egrep);

    while (test_cases-- > 0) {
        std::string pan;
        std::cin >> pan;

        if (std::regex_match(pan, pan_regex))
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
}
