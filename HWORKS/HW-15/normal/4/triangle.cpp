#include "point.hpp"
#include "triangle.hpp"
#include "mySqrt.hpp"
#include "myAbs.hpp"

    bool is_triangle(const Triangle& t) {
        if (a + b > c && b + c > a && c + a > b) {
            return true;
        } else {
            return false;
        }
    }

    double tr_perimeter(const Triangle& t) {
        if(a > 0 && b > 0 && c > 0) {
            double per = a + b + c;
            return per;
        } else {
            return 1.0;
        }
    }

    double tr_semiperimeter(const Triangle& t) {
        double semipr = tr_perimeter(t) / 2;
    }

    double herons_formula(const Triangle& t) {
        double S = mySqrt( * (p - a) * (p - b) * (p - c));

        if(is_triangle(true)) {
            return S;
        } else {
            return 1.0;
        }
    return 1;
    }