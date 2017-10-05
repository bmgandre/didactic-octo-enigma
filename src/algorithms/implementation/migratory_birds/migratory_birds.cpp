#include "migratory_birds.h"
#include <iostream>
#include <string>
#include <map>
#include <queue>

using hackerrank::bmgandre::algorithms::implementation::migratory_birds;

void migratory_birds::run()
{
    auto n = 0;
    std::cin >> n;

    std::map<int, int> type_count_map;
    for (auto i = 0; i < n; i++) {
        auto bird_type = 0;
        std::cin >> bird_type;

        if (type_count_map.count(bird_type) > 0) {
            type_count_map[bird_type] = ++type_count_map[bird_type];
        } else {
            type_count_map.insert(std::make_pair(bird_type, 1));
        }
    }

    auto comp = [](const std::pair<int, int>& lhs, const std::pair<int, int>& rhs) {
        return lhs.second < rhs.second;
    };

    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, decltype(comp)> queue(comp);
    for (const auto& pair : type_count_map) {
        queue.push(pair);
    }

    std::cout << queue.top().first << std::endl;
}
