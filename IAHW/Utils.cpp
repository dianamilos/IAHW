#include "Utils.h"
#include <cmath>

double distance(const City& a, const City& b) {
    return std::sqrt(std::pow(a.x - b.x, 2) + std::pow(a.y - b.y, 2));
}

double calculatePathCost(const std::vector<City>& cities, const std::vector<int>& path) {
    double totalCost = 0.0;
    for (size_t i = 1; i < path.size(); ++i) {
        totalCost += distance(cities[path[i - 1]], cities[path[i]]);
    }
    totalCost += distance(cities[path.back()], cities[path.front()]);
    return totalCost;
}
