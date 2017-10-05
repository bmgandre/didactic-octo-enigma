#include "simple_array_sum.h"
#include <iostream>
#include <string>

using hackerrank::bmgandre::algorithms::warmup::simple_array_sum;

void simple_array_sum::run()
{
    auto sum = 0;
    auto count = 0;
    std::cin >> count;
    for (auto i = 0; i < count; i++)
    {
        int num = 0;
        std::cin >> num;
        sum += num;
    }

    std::cout << sum;
}

