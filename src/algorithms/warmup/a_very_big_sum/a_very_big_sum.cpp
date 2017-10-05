#include "a_very_big_sum.h"
#include <iostream>
#include <string>

using hackerrank::bmgandre::algorithms::warmup::a_very_big_sum;

void a_very_big_sum::run()
{
    auto count = 0L;
    std::cin >> count;

    unsigned long long int current_value;
    unsigned long long int sum = 0L;
    for (auto i = 0; i < count; i++)
    {
        std::cin >> current_value;
        sum += current_value;
    }

    std::cout << sum << std::endl;
}
