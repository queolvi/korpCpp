#include "point.hpp"
#include "triangle.hpp"
#include "mySqrt.hpp"
#include "myAbs.hpp"
#include <iostream>


int main() {

    double a = 0, b = 0, c = 0;
    std::cout << "Enter fields a, b, c for yours triangle: \n";
    std::cin >> a >> b >> c;
    
    Triangle MyT{a, b, c};
    



    return 0;
}