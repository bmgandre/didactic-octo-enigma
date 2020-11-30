#include "staircase.h"
#include <iostream>
#include <string>

using namespace hackerrank::bmgandre::algorithms::warmup;

/// Practice>Algorithms>Warmup>Staircase
///
/// https://www.hackerrank.com/challenges/staircase
void staircase::solve()
{
	auto n = 0;
	std::cin >> n;

	for (auto i = 0, j = 1; i < n; i++, j++) {
		std::cout << std::string(n - j, ' ') << std::string(j, '#') << std::endl;
	}
}
