#include "Vec2D.h"
#include "Utils.h"
Practice::Vec2D::Vec2D(double x = 0.0, double y = 0.0) : x(x), y(y) {};


double Practice::Vec2D::scalar_product(Vec2D &tmp) const {
    double res = x * tmp.x + y * tmp.y;
    return res; 
}
double Practice::Vec2D::length() const {
    double res = mySqrt(x * x + y * y );
}