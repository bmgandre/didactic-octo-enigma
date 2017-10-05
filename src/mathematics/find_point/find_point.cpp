#include "find_point.h"
#include <iostream>

using namespace hackerrank::bmgandre::mathematics;

void find_point::find_symmetric_point()
{
    int tests = 0;
    std::cin >> tests;

    while (tests > 0) {
        int px = 0, py = 0, qx = 0, qy = 0;
        std::cin >> px >> py >> qx >> qy;

        int vx = qx - px;
        int vy = qy - py;

        int plx = qx + vx;
        int ply = qy + vy;

        std::cout << plx << " " << ply << std::endl;

        tests--;
    }
}

