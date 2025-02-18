#include <iostream>
#include <cmath>
#include "point.hpp"

double distance(const Point& a, const Point& b) {
    double dist = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
    dist = std::sqrt(dist);
    return dist;
}

std::istream & operator >>(std::istream &in, Point& p) {
    std::cout << "Enter x and y \n"; 
    double >> p.x >> p.y;
    return in;
}
int operator*(const Point& A, const Point& B) {
    double res = (A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y);
    return res;
}