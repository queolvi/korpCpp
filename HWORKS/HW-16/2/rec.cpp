#include "rec.hpp"
#include "point.hpp"
namespace HW_16 {

    Rectangle::Rectangle() : a(), b(), c(), d() {};

    bool HW_16::Rectangle::isSquareTriangle(const Point &A, const Point &B, const Point &C) const {
        return (A * B + A * C) == B * C;
    }

    bool HW_16::Rectangle::isRectangle(const HW_16::Rectangle& rec) const {
        double res = isSquareTriangle(rec.a, rec.b, rec.c) && isSquareTriangle(rec.d, rec.b, rec.c);
        return res;
    }
    Rectangle operator+(const Rectangle& rhs) const {
        return *this;
    }

    const Rectangle& HW_16::Rectangle::operator+=(const HW_16::Rectangle& rec) {}

    double HW_16::Rectangle::calc_sq(HW_16::Rectangle& rec) {
    double res = (rec.a + rec.b) * (rec.c * rec.d);
    return res; 

    }
    
    double HW_16::Rectangle::calc_per(HW_16::Rectangle& rec) {
    double res = (rec.a + rec.b) + (rec.c + rec.d);
    return res;
    }

    double HW_16::Rectangle::calc_diagonal_length(const HW_16::Rectangle& rec) {
    double res =

    }

};