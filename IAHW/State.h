#ifndef STATE_H
#define STATE_H

#include <vector>

struct State {
    std::vector<int> path;
    double cost;
    double heuristic;

    bool operator>(const State& other) const {
        return (cost + heuristic) > (other.cost + other.heuristic);
    }
};

#endif // STATE_H
