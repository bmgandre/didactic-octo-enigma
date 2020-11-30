#include "mini_max_sum.h"
#include <iostream>
#include <string>
#include <queue>
#include <functional>

using hackerrank::bmgandre::algorithms::warmup::mini_max_sum;

/// Practice>Algorithms>Warmup>Mini-Max Sum
///
/// https://www.hackerrank.com/challenges/mini-max-sum
void mini_max_sum::solve()
{
	auto n_numbers = 5L; // the number of elements
	auto n_sum = 4L; // the number of elements to sum

	std::priority_queue<long, std::vector<long>, std::greater<long> > queue_asc;
	std::priority_queue<long, std::vector<long>, std::less<long> > queue_desc;

	for (auto i = 0; i < n_numbers; i++)
	{
		auto current_value = 0;
		std::cin >> current_value;

		queue_asc.push(current_value);
		queue_desc.push(current_value);
	}

	auto min = 0L;
	auto max = 0L;
	for (auto i = 0; i < n_sum; i++)
	{
		max += queue_desc.top();
		queue_desc.pop();

		min += queue_asc.top();
		queue_asc.pop();
	}

	std::cout << min << " " << max << std::endl;
}

