#include "sherlock_and_array.h"
#include <iostream>
#include <string.h>

using namespace hackerrank::bmgandre::algorithms::search;

/// Practice>Algorithms>Search>Sherlock and Array
///
/// https://www.hackerrank.com/challenges/sherlock-and-array
void sherlock_and_array::solve()
{
	int test_cases;
	std::cin >> test_cases;

	while (test_cases-- > 0) {
		int array_length = 0;
		std::cin >> array_length;

		if (array_length == 1) {
			std::cout << "YES" << std::endl;
			int tmp;
			std::cin >> tmp;
			continue;
		}

		int* array;
		array = new int[array_length];

		int* leftsum;
		leftsum = new int[array_length];

		for (int i = 0; i < array_length; i++) {
			std::cin >> array[i];
			if (i > 0 && i < array_length - 1) {
				leftsum[i] = leftsum[i - 1] + array[i];
			} else {
				leftsum[i] = array[i];
			}
		}

		if (array_length == 2) {
			if (array[0] == array[1]) {
				std::cout << "YES" << std::endl;
			} else {
				std::cout << "NO" << std::endl;
			}
			delete[] array;
			delete[] leftsum;
			continue;
		}

		int* rightsum;
		rightsum = new int[array_length];
		rightsum[array_length - 1] = array[array_length - 1];

		bool found = false;
		for (int i = array_length - 2; i > 0; i--) {
			rightsum[i] = rightsum[i + 1] + array[i];
			if (rightsum[i + 1] == leftsum[i - 1]) {
				found = true;
				break;
			}
		}

		if (found) {
			std::cout << "YES" << std::endl;
		} else {
			std::cout << "NO" << std::endl;
		}

		delete[] array;
		delete[] rightsum;
		delete[] leftsum;
	}
}
