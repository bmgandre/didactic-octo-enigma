#include "funny_string.h"
#include <iostream>
#include <string>
#include <algorithm>

using hackerrank::bmgandre::algorithms::strings::funny_string;

/// Practice>Algorithms>Strings>Funny String
///
/// https://www.hackerrank.com/challenges/funny-string
std::string funny_string::solve(std::string input)
{
	std::string reverse;
	reverse.resize(input.size());

	std::reverse_copy(std::begin(input), std::end(input), std::begin(reverse));

	for (auto i = 0ul; i < input.length() - 1; i++)
	{
		if (std::abs(input[i] - input[i + 1]) != std::abs(reverse[i] - reverse[i + 1]))
		{
			return "Not Funny";
		}
	}

	return "Funny";
}
