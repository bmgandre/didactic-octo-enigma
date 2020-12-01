#include "diagonal_difference.h"
#include <iostream>
#include <vector>
#include <string>

using namespace hackerrank::bmgandre::algorithms::warmup;

/// Practice>Algorithms>Warmup>Diagonal Difference
///
/// https://www.hackerrank.com/challenges/diagonal-difference
void diagonal_difference::solve()
{
	auto n = 0; // lines/rows
	std::cin >> n;

	std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

	for (auto i = 0; i < n; i++) {
		for (auto j = 0; j < n; j++) {
			std::cin >> matrix[i][j];
		}
	}

	auto l2r = 0; // left to right diagonal
	auto r2l = 0; // right to left diagonal
	for (auto i = 0, j = n - 1; i < n, j >= 0; i++, j--) {
		l2r += matrix[i][i];
		r2l += matrix[i][j];
	}

	std::cout << std::abs(l2r - r2l) << std::endl;
}
