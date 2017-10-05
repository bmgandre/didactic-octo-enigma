#include "compare_the_triplets.h"
#include <iostream>
#include <string>
#include <regex>

using namespace hackerrank::bmgandre::algorithms::warmup;

void compare_the_triplets::run()
{
    int a0, a1, a2;
    std::cin >> a0 >> a1 >> a2;

    int b0, b1, b2;
    std::cin >> b0 >> b1 >> b2;

    int a = int(a0 > b0) + int(a1 > b1) + int(a2 > b2);
    int b = int(b0 > a0) + int(b1 > a1) + int(b2 > a2);

    std::cout << a << " " << b;
}
