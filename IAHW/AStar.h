#ifndef ASTAR_H
#define ASTAR_H

#include <vector>
#include "City.h"

std::vector<int> tspAStar(const std::vector<City>& cities);
double heuristic(const std::vector<City>& cities, const std::vector<int>& path, const std::vector<bool>& visited);

#endif // ASTAR_H

