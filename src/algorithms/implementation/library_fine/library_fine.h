#pragma once

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {

struct LibDate {
	int year;
	int month;
	int day;

	LibDate(int day, int month, int year)
		: year { year }, month { month }, day { day }
	{
	}
};

class library_fine
{
public:
	static int solve(LibDate returnedDate, LibDate dueDate);
};

} // namespace implementation
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank
