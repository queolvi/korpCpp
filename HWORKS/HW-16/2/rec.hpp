// rec.hpp
#ifndef REC_HPP
#define REC_HPP


namespace HW_16 {
    class Rectangle {
    private:
    Point a, b, c, d;
    public:

    Rectangle();
    Rectangle(Rectangle& rec);
    Rectangle(const Rectangle& rec) = delete;

    const Rectangle& operator+(Rectangle& rec);

    bool isSquareTriangle(const Point& A, const Point& B, const Point& C) const;
    bool isRectangle(const Rectangle& rec) const;


    double calc_sq(Rectangle& rec);
    double calc_per(Rectangle& rec);
    double calc_diagonal_length(const Rectangle& rec);
    
};
} // namespace HW_16
#endif