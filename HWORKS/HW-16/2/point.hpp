#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>

struct Point {
    double x, y;
};

double distance(const Point& a, const Point& b);
#endif