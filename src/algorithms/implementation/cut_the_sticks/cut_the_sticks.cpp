#include "cut_the_sticks.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace hackerrank::bmgandre::algorithms::implementation;

/// Practice>Algorithms>Implementation>Cut the sticks
///
/// https://www.hackerrank.com/challenges/cut-the-sticks/problem
void cut_the_sticks::solve()
{
	auto n = 0;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	std::sort(a.begin(), a.end());

	auto cur_pos = 0;
	auto sticks_cut = 0;
	do {
		sticks_cut = 0;

		auto cut = a[cur_pos];
		for (auto i = cur_pos; i < n; i++) {
			if (a[i] > 0) {
				sticks_cut++;
				a[i] -= cut;
			}
		}
		while (cur_pos < n && a[cur_pos] == 0) {
			cur_pos++;
		}

		std::cout << sticks_cut << std::endl;
	} while (sticks_cut > 0 && cur_pos < n);
}
