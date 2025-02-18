#include "rec.hpp"
#include "point.hpp"
namespace HW_16 {

    Rectangle::Rectangle() : a(), b(), c(), d() {};

    bool HW_16::Rectangle::isSquareTriangle(const Point& A, const Point& B, const Point& C) const {
        return (A * B + A * C) == B * C;
    }

    bool HW_16::Rectangle::isRectangle(const Rectangle& rec) const {
        double res = isSquareTriangle(rec.a, rec.b, rec.c) && isSquareTriangle(rec.d, rec.b, rec.c);
        return res;
    }
    const Rectangle& HW_16::Rectangle::operator+(Rectangle rec, const Rectangle& rhs) {
        rec += rhs;
        return rec;
    }

    const Rectangle& HW_16::Rectangle::operator+=(const ) 

    double HW_16::Rectangle::calc_sq(Rectangle& rec) {
    double res = (rec.a + rec.b) * (rec.c * rec.d);
    return res; 

    }
    
    double HW_16::Rectangle::calc_per(Rectangle& rec) {
    double res = (rec.a + rec.b) + (rec.c + rec.d);
    return res;
    }

    double HW_16::Rectangle::calc_diagonal_length(const Rectangle& rec) {
    double res =

    }

};