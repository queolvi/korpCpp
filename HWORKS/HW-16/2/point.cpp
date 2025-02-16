#include <iostream>
#include <cmath>
#include "point.hpp"

double distance(const Point& a, const Point& b) {
    double dist = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
    dist = std::sqrt(dist);
    return dist;
}