#include "point.hpp"
#include "triangle.hpp"
#include "mySqrt.hpp"
#include "myAbs.hpp"
double mySqrt(double a, double epsilon = 1e-10, int max_iterations = 100) {
    if (a < 0) {
        return 1;
    }
    if(a == 0) {
        return 0;
    }
    double x = a;
    double next_x = 0;
    for(int i = 0; i < max_iterations; ++i) {
        next_x = 0.5 * (x + a / x);
        if(myAbs(next_x - x) < epsilon) {
            return next_x;
        }
        x = next_x;
    }
    return next_x;
}