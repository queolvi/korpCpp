#include "point.hpp"
namespace HW_16 {
class Rectangle {
    private:
    Point a, b, c, d;
    public:

    Rectangle();
    Rectangle(Rectangle& rec);
    Rectangle(const Rectangle& rec) : a(rec.a), b(rec.b), c(rec.c), d(rec.d) {} = delete;

    double calc_sq(Rectangle& rec) const;
    double calc_per(Rectangle& rec) const;
    double calc_diagonal_length(Rectangle& rec) const;
    Rectangle() 
}
}