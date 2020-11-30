#include "circular_array_rotation.h"
#include <iostream>
#include <string>
#include <deque>

using hackerrank::bmgandre::algorithms::implementation::circular_array_rotation;

/// Practice>Algorithms>Implementation>Circular Array Rotation
///
/// https://www.hackerrank.com/challenges/circular-array-rotation
void circular_array_rotation::solve()
{
	auto n = 0, k = 0, q = 0;
	std::cin >> n >> k >> q;
	std::deque<int> d;
	for (auto i = 0; i < n; i++)
	{
		int num = 0;
		std::cin >> num;
		d.push_back(num);
	}

	for (auto i = 0; i < k; i++)
	{
		d.push_front(d.back());
		d.pop_back();
	}

	for (auto i = 0; i < q; i++)
	{
		int m = 0;
		std::cin >> m;
		std::cout << d[m] << std::endl;
	}
}

