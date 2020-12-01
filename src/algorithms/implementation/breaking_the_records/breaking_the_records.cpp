#include "breaking_the_records.h"
#include <iostream>
#include <string>
#include <limits>

using namespace hackerrank::bmgandre::algorithms::implementation;

/// Practice>Algorithms>Implementation>Breaking the Records
///
/// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
void breaking_the_records::solve()
{
	auto n = 0;
	std::cin >> n;

	auto best_score_inc = 0;
	auto worst_score_dec = 0;

	auto best_score = 0;
	auto worst_score = std::numeric_limits<int>::max();

	for (auto i = 0; i < n; i++) {
		auto current_value = 0;
		std::cin >> current_value;

		if (i == 0) {
			best_score = worst_score = current_value;
		} else {
			if (current_value > best_score) {
				best_score = current_value;
				++best_score_inc;
			}

			if (current_value < worst_score) {
				worst_score = current_value;
				++worst_score_dec;
			}
		}
	}

	std::cout << best_score_inc << " " << worst_score_dec << std::endl;
}
