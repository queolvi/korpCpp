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

    std::cout << "Lets check, is your triangle a triangle: " << MyT.is_triangle(MyT) << "\n";
    double per = MyT.tr_perimeter(MyT);
    std::cout << "Triangle perimeter = " << per << "\n";
    double semiper = MyT.tr_semiperimeter(MyT);
    std::cout << "Triangle semiperimeter = " << semiper << "\n";
    double Square = MyT.herons_formula(MyT);
    std::cout << "Triangle Square: " << Square << "\n";
    



    return 0;
}