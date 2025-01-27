#include<iostream>
#include<cmath>
class Point {
    public:
    int x_, y_;

    Point(double x_ = 0.0, double y_ = 0.0) : x_(x_), y_(y_) {}

    double get_x_ () const { return x_ ; }
    double get_y_ () const { return y_ ; }

    void Read() {
        std::cout << "x: ";
        std::cin >> x_;
        std::cout << "y: ";
        std::cin >> y_;
    }

    double calc_point_dist(const Point& other) const {
        double dx_ = x_ - other.x_;
        double dy_ = y_ - other.y_;
        return std::sqrt(dx_ * dx_ + dy_ * dy_); 
    }

    double calc_point_dist_from_start() const {
        return calc_point_dist(Point(0,0));
    }

    friend std::ostream& operator << (std::ostream& os, const Point& p) {
        os << "(" << p.x_ << ", " << p.y_ << ")";
        return os;
    }
};