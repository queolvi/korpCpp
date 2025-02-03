#include "point.hpp"
#include "triangle.hpp"
#include "mySqrt.hpp"
#include "myAbs.hpp"

double distance(const Point& a, const Point& b) {
    double dist = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
    dist = mySqrt(dist);
    return dist;
}