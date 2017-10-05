#include "angry_professor.h"
#include <iostream>

using hackerrank::bmgandre::algorithms::implementation::angry_professor;

void angry_professor::run()
{
    auto tc = 0; // the number of test cases
    std::cin >> tc;

    for (auto ti = 0; ti < tc; ti++) {
        auto n = 0, k = 0; // N (students in class), K (the cancelation threshold)
        std::cin >> n >> k;

        auto at = 0; // attendance
        for (auto i = 0; i < n; i++) {
            auto ai = 0;
            std::cin >> ai;
            if (ai < 1) {
                at++;
            }
        }

        std::cout << (at >= k ? "NO" : "YES") << std::endl;
    }
}

