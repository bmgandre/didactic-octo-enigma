#include "apple_and_orange.h"
#include <iostream>
#include <string>
#include <vector>

using hackerrank::bmgandre::algorithms::implementation::apple_and_orange;

/// Practice>Algorithms>Implementation>Apple and Orange
///
/// https://www.hackerrank.com/challenges/apple-and-orange
void apple_and_orange::solve()
{
	auto s = 0; // house start point
	auto t = 0; // house end point
	std::cin >> s >> t;

	auto a = 0; // apple tree position
	auto b = 0; // orange tree position
	std::cin >> a >> b;

	auto m = 0; // number of apples
	auto n = 0; // number of oranges
	std::cin >> m >> n;

	auto count_fruit_fall_house = [] (int tree_position, int samples, int house_start_pos, int house_end_pos)
	{
		auto fruit_house = 0;
		for (auto i = 0; i < samples; i++) {
			auto fruit_i = 0;
			std::cin >> fruit_i;

			if (tree_position + fruit_i >= house_start_pos &&
				tree_position + fruit_i <= house_end_pos) {
				++fruit_house;
			}
		}

		return fruit_house;
	};

	auto apple_house = count_fruit_fall_house(a, m, s, t);
	auto orange_house = count_fruit_fall_house(b, n, s, t);
	std::cout << apple_house << std::endl
			  << orange_house << std::endl;
}
