#include "Figure.h"
#include "Utils.h"
Practice::Circle::Circle(double r) : r(r){};

double Practice::Circle::length(Practice::Circle &c) const {
    double res = 2 * PI * r;
    return res; 
}

double Practice::Circle::S(Practice::Circle &c) const {
    double res = PI * r * r;
    return res;
}

Practice::Ellipse::Ellipse(double r, double r_) : Circle(r), r_(r_) {};

double Practice::Ellipse::length(Practice::Ellipse &e) const {
    double res = PI * (3 * (r + r_) - mySqrt((3 * r + r_) * (r + 3 * r_)));
    return res;
}
double Practice::Ellipse::S(Practice::Ellipse &e) const {
    double res = PI * r_ * r_;
    return res;
}

bool Practice::is_intersection(const Practice::Circle &c, const Practice::Ellipse &e) {

    double dist = c.r + e.r_;
    if(dist < 0) {
        return dist;
    }
    return 1;
}