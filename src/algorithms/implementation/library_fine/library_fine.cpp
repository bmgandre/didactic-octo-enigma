#include "library_fine.h"
#include <iostream>
#include <string>
#include <chrono>
#include <ctime>

using namespace hackerrank::bmgandre::algorithms::implementation;

int library_fine::solve(LibDate returnedDate, LibDate dueDate)
{
	if (returnedDate.year > dueDate.year) {
		return 10'000;
	}

	if (returnedDate.year == dueDate.year)
	{
		if (returnedDate.month > dueDate.month) {
			return (returnedDate.month - dueDate.month) * 500;
		}

		if (returnedDate.day > dueDate.day && returnedDate.month == dueDate.month) {
			return (returnedDate.day - dueDate.day) * 15;
		}
	}

	return 0;
}
