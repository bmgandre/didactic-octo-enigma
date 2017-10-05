#include "divisible_sum_pairs.h"
#include <iostream>
#include <string>
#include <vector>

using hackerrank::bmgandre::algorithms::implementation::divisible_sum_pairs;

void divisible_sum_pairs::run()
{
    auto n = 0, k = 0;
    std::cin >> n >> k;

    std::vector<int> a(n);
    for (auto i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    auto valid_pairs = 0;
    for (auto i = 0; i < n; i++) {
        for (auto j = i + 1; j < n; j++) {
            if ((a[i] + a[j]) % k == 0) {
                valid_pairs++;
            }
        }
    }

    std::cout << valid_pairs << std::endl;
}

