#include "two_strings.h"
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using hackerrank::bmgandre::algorithms::strings::two_strings;

const unsigned short mask_left = 1;
const unsigned short mask_right = 2;
const unsigned short mask_both = 3;

/// Practice>Algorithms>Strings>Two Strings
///
/// https://www.hackerrank.com/challenges/two-strings
std::string two_strings::solve(std::string left, std::string right)
{
	std::map<char, int> char_map;

	std::for_each(std::begin(left), std::end(left), [&](const char c)
	{
		char_map[c] = char_map[c] | mask_left;
	});

	std::for_each(std::begin(right), std::end(right), [&](const char c)
	{
		char_map[c] = char_map[c] | mask_right;
	});

	auto is_present_in_both_left_and_right = [&](const std::pair<char, int> &pair)
	{
		return pair.second == mask_both;
	};

	if (std::any_of(std::begin(char_map), std::end(char_map), is_present_in_both_left_and_right))
	{
		return "YES";
	}

	return "NO";
}
