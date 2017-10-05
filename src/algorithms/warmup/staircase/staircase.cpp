#include "staircase.h"
#include <iostream>
#include <string>

using hackerrank::bmgandre::algorithms::warmup::staircase;

void staircase::run()
{
    auto n = 0;
    std::cin >> n;

    for (auto i = 0, j = 1; i < n; i++, j++) {
        std::cout << std::string(n - j, ' ') << std::string(j, '#') << std::endl;
    }
}

