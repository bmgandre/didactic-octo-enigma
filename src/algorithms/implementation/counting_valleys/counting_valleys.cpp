#include "counting_valleys.h"
#include <algorithm>
#include <string>

using hackerrank::bmgandre::algorithms::implementation::counting_valleys;

int counting_valleys::solve(int n, std::string s)
{
	auto height = 0;

	auto step = [&height](const char& step)
	{
		if (step == 'U') {
			height++;
		} else {
			height--;
		}
	};

	auto valleys = 0;

	auto detect_valley = [&](int previous_height) {
		if (height == 0 && previous_height < 0)
		{
			valleys++;
		}
	};

	std::for_each(s.cbegin(), s.cend(), [&](const char& c) {
		int previous_height = height;
		step(c);
		detect_valley(previous_height);
	});

	int previous_height = height;
	height = 0;
	detect_valley(previous_height);

	return valleys;
}

