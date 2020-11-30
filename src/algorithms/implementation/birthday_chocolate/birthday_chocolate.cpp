#include "birthday_chocolate.h"
#include <iostream>
#include <string>
#include <vector>

using hackerrank::bmgandre::algorithms::implementation::birthday_chocolate;

/// Practice>Algorithms>Implementation>Sub-array Division
///
/// https://www.hackerrank.com/challenges/the-birthday-bar
void birthday_chocolate::solve()
{
	auto n = 0; // the number of squares in the chocolate bar
	std::cin >> n;
	
	auto s_vector = std::vector<int>(n); // the numbers written on each consecutive square of chocolate
	for (auto i = 0; i < n; i++) {
		std::cin >> s_vector[i];
	}
	
	auto d = 0; // birth day
	auto m = 0; // month day
	std::cin >> d >> m;
	
	auto number_of_ways = 0;
	for (auto i = 0; i < n - m + 1; i++) {
		auto pieces_sum = 0;
		for (auto j = i; j < i + m; j++) {
			pieces_sum += s_vector[j];
		}
		
		if (pieces_sum == d) {
			++number_of_ways;
		}
	}
	
	std::cout << number_of_ways << std::endl;
}
