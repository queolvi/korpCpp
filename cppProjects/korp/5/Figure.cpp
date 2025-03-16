#include "Figure.h"

Practice::Circle::Circle(double r = 0.0) : r(r){};

double Practice::Circle::length(Practice::Circle &c) const {
    double res = 2 * PI * r;
    return res; 
}

double Practice::Circle::S(Practice::Circle &c) const {
    double res = PI * r * r;
    return res;
}
Practice::Ellipse::Ellipse(double r = 0.0, double r_ = 0.0)_: Circle(r), r_(r_) {}; 