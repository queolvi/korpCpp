#include "point.hpp"
#include "triangle.hpp"
#include "mySqrt.hpp"
#include "myAbs.hpp"

    bool Triangle::is_triangle(const Triangle& t) {
        if (t.a + t.b > t.c && t.b + t.c > t.a && t.c + t.a > t.b) {
            return true;
        } else {
            return false;
        }
    }

    double Triangle::tr_perimeter(const Triangle& t) {
        if(t.a > 0 && t.b > 0 && t.c > 0) {
            double per = t.a + t.b + t.c;
            return per;
        } else {
            return 1.0;
        }
    }

    double Triangle::tr_semiperimeter(const Triangle& t) {
        double semipr = tr_perimeter(t) / 2;
        return semipr;
    }

    double Triangle::herons_formula(const Triangle& t) {
    if (!is_triangle(t)) {
        return 1.0; 
    }

    double p = tr_semiperimeter(t);
    double area = mySqrt(p * (p - t.a) * (p - t.b) * (p - t.c)); 
    return area;
}