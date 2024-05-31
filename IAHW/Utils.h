#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include "City.h"

double distance(const City& a, const City& b);
double calculatePathCost(const std::vector<City>& cities, const std::vector<int>& path);

#endif // UTILS_H

