#include "plus_minus.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace hackerrank::bmgandre::algorithms::warmup;

/// Practice>Algorithms>Warmup>Plus Minus
///
/// https://www.hackerrank.com/challenges/plus-minus
void plus_minus::solve()
{
	auto count = 0;
	std::cin >> count;

	auto negatives = .0, positives = .0, zeros = .0, current = .0;
	for (auto i = 0; i < count; i++) {
		std::cin >> current;
		if (current < 0) {
			++negatives;
		} else if (current > 0) {
			++positives;
		} else {
			++zeros;
		}
	}

	std::cout << std::setprecision(6) << std::fixed << positives / count << std::endl
			  << std::setprecision(6) << std::fixed << negatives / count << std::endl
			  << std::setprecision(6) << std::fixed << zeros / count << std::endl;
}
