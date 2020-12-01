#include "between_two_sets.h"
#include <iostream>
#include <string>
#include <queue>
#include <limits>

using namespace hackerrank::bmgandre::algorithms::implementation;

/// Practice>Algorithms>Implementation>Between Two Sets
///
/// https://www.hackerrank.com/challenges/between-two-sets
void between_two_sets::solve()
{
	auto n = 0; // number of samples in A
	auto m = 0; // number of samples in B
	std::cin >> n >> m;

	std::vector<int> list_a;
	auto max_a = 0;
	for (auto i = 0; i < n; i++) {
		auto value = 0;
		std::cin >> value;
		list_a.push_back(value);
		if (value > max_a) {
			max_a = value;
		}
	}

	std::vector<int> list_b;
	auto min_b = std::numeric_limits<int>::max();
	for (auto i = 0; i < m; i++) {
		auto value = 0;
		std::cin >> value;
		list_b.push_back(value);
		if (value < min_b) {
			min_b = value;
		}
	}

	auto x_count = 0;
	for (auto x = max_a; x <= min_b; x++) {
		auto pass_a = true;
		for (auto i = 0; i < n; i++) {
			pass_a = pass_a && (x % list_a[i] == 0);
		}

		auto pass_b = true;
		for (auto i = 0; i < m; i++) {
			pass_b = pass_b && (list_b[i] % x == 0);
		}

		if (pass_a && pass_b) {
			x_count++;
		}
	}

	std::cout << x_count << std::endl;
}
