#include "bon_appetit.h"
#include <iostream>
#include <string>

using hackerrank::bmgandre::algorithms::implementation::bon_appetit;

/// Practice>Algorithms>Implementation>Bill Division
///
/// https://www.hackerrank.com/challenges/bon-appetit
void bon_appetit::solve()
{
	auto n = 0, k = 0;
	std::cin >> n >> k;

	auto sum_c = 0;
	auto k_value = 0;
	for (auto i = 0; i < n; i++) {
		auto value = 0;
		std::cin >> value;

		if (i != k) {
			sum_c += value;
		} else {
			k_value = value;
		}
	}

	auto b = 0;
	std::cin >> b;
	if (b != (sum_c / 2)) {
		std::cout << k_value / 2 << std::endl;
	} else {
		std::cout << "Bon Appetit" << std::endl;
	}
}
