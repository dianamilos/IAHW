#include <iostream>
#include <vector>
#include "City.h"
#include "BFS.h"
#include "UCS.h"
#include "AStar.h"

int main() {
    // Citirea intrărilor
    int n;
    std::cin >> n;
    std::vector<City> cities(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> cities[i].x >> cities[i].y;
    }

    // Apelarea algoritmilor de căutare și afișarea rezultatelor
    auto bfsPath = tspBFS(cities);
    auto ucsPath = tspUniformCostSearch(cities);
    auto aStarPath = tspAStar(cities);

    // Afișarea rezultatelor
    std::cout << "Traseu BFS: ";
    for (int city : bfsPath) {
        std::cout << city << " ";
    }
    std::cout << "\nCost Total: " << calculatePathCost(cities, bfsPath) << "\n";

    std::cout << "Traseu Uniform Cost Search: ";
    for (int city : ucsPath) {
        std::cout << city << " ";
    }
    std::cout << "\nCost Total: " << calculatePathCost(cities, ucsPath) << "\n";

    std::cout << "Traseu A* Search: ";
    for (int city : aStarPath) {
        std::cout << city << " ";
    }
    std::cout << "\nCost Total: " << calculatePathCost(cities, aStarPath) << "\n";

    return 0;
}
