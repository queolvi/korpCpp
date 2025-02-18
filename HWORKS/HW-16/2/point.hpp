#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>

struct Point {
    double x, y;
};

std::istream & operator >>(std::istream &in, Point& p);
int operator*(const Point& A, const Point& B);

double distance(const Point& a, const Point& b);
#endif