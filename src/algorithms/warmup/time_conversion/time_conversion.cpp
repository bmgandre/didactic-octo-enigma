#include "time_conversion.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <regex>

using namespace hackerrank::bmgandre::algorithms::warmup;

/// Practice>Algorithms>Warmup>Time Conversion
///
/// https://www.hackerrank.com/challenges/time-conversion
void time_conversion::solve()
{
	std::string pattern = R"regex((\d{2}):(\d{2}):(\d{2})(AM|PM))regex";
	std::regex regex(pattern, std::regex::ECMAScript);
	std::smatch matches;

	std::string input_time;
	std::cin >> input_time;
	if (std::regex_search(input_time, matches, regex))
	{
		auto hour = std::stoi(matches[1].str());
		auto min = std::stoi(matches[2].str());
		auto sec = std::stoi(matches[3].str());
		auto ampm = matches[4].str();

		if (ampm == "PM" && hour < 12) {
			hour = (hour + 12) % 24;
		} else if (ampm == "AM" && hour == 12) {
			hour = 0;
		}

		std::cout << std::setfill('0') << std::setw(2) << hour
				  << ":"
				  << std::setfill('0') << std::setw(2) << min
				  << ":"
				  << std::setfill('0') << std::setw(2) << sec;
	}
}
