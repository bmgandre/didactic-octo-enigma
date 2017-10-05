#include "day_of_the_programmer.h"
#include <iostream>
#include <string>

using hackerrank::bmgandre::algorithms::implementation::day_of_the_programmer;

void day_of_the_programmer::run()
{
    auto year = 0;
    std::cin >> year;

    auto day = 13;

    if (year == 1918) {
        day += 13;
    } else if (year < 1918) {
        if (year % 4 == 0) {
            --day;
        }
    } else {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            --day;
        }
    }

    std::cout << day << ".09." << year << std::endl;

}
