#include "birthday_cake_candles.h"
#include <iostream>
#include <string>

using hackerrank::bmgandre::algorithms::warmup::birthday_cake_candles;

void birthday_cake_candles::run()
{
    auto n = 0;
    std::cin >> n;

    auto tallest_count = 0;
    auto tallest = 0, current = 0;
    for (auto i = 0; i < n; i++) {
        std::cin >> current;
        if (current > tallest) {
            tallest = current;
            tallest_count = 1;
        } else if (current == tallest) {
            ++tallest_count;
        }
    }

    std::cout << tallest_count << std::endl;
}
