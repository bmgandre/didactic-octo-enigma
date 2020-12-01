#include "simple_array_sum.h"
#include <iostream>
#include <string>

using namespace hackerrank::bmgandre::algorithms::warmup;

/// Practice>Algorithms>Warmup>Simple Array Sum
///
/// https://www.hackerrank.com/challenges/simple-array-sum
void simple_array_sum::solve()
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
