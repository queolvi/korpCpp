#include <iostream>
#include "point.hpp"
#include <cmath>

void Point_Test(Point& p1_, Point& p2_);

int main() {
    Point p1_, p2_;

    p1_.Read();
    p2_.Read();

    Point_Test(p1_, p2_);

    std::cout << "Point p1: " << p1_ << "\n";
    std::cout << "Point p2: " << p2_ << "\n";
    
    std::cout << "distance from p1 to (0,0): " << p1_.calc_point_dist_from_start() << "\n";
    std::cout << "distance from p2 to (0,0): " << p2_.calc_point_dist_from_start() << "\n";
    std::cout << "distance between points: " << p1_.calc_point_dist(p2_) << "\n";
    return 0;
}

void Point_Test(Point& p1_, Point& p2_) {
    
    

    if(p1_.get_x_() == 1.0 && p1_.get_y_() == 2.0) {
        std::cout << "Test 1 passed! \n";
    } else {
        std::cout << "Test 1 failed! \n";
    }

    if(std::abs(p1_.calc_point_dist(p2_) - 5.0) < 1e-9) {
        std::cout << "Test 2 passed! \n";
    } else {
        std::cout << "Test 2 failed! \n";
    }
}