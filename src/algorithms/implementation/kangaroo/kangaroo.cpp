#include "kangaroo.h"
#include <iostream>

using hackerrank::bmgandre::algorithms::implementation::kangaroo;

/// Practice>Algorithms>Implementation>Number Line Jumps
///
/// https://www.hackerrank.com/challenges/kangaroo/problem
void kangaroo::solve()
{
	auto x1 = 0, v1 = 0, x2 = 0, v2 = 0;
	std::cin >> x1 >> v1 >> x2 >> v2;

	auto land = false;
	if ((v1 - v2) > 0)
	{
		auto numerator = (x2 - x1);
		auto denominator = (v1 - v2);
		auto position = numerator / denominator; // Linear motion
		auto remainder = numerator % denominator;

		if (position > 0 && remainder == 0)
			land = true;
	}

	std::cout << (land ? "YES" : "NO") << std::endl;
}
