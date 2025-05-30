#include "rational.hpp"
#include <iostream>

int main() {
    Rational a(3, 4);
    Rational b(2, 5);
    Rational c(6);
    
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n\n";
    
    std::cout << "a + b = " << a + b << "\n";
    std::cout << "a - b = " << a - b << "\n";
    std::cout << "a * b = " << a * b << "\n";
    std::cout << "a / b = " << a / b << "\n\n";
    
    std::cout << "a + 2 = " << a + Rational(2) << "\n";
    std::cout << "3 * b = " << Rational(3) * b << "\n\n";
    
    std::cout << "a == b? " << (a == b) << "\n";
    std::cout << "a != b? " << (a != b) << "\n";
    std::cout << "a < b? " << (a < b) << "\n";
    std::cout << "a > b? " << (a > b) << "\n\n";
    
    Rational d;
    std::cout << "Enter fraction (num/den): ";
    std::cin >> d;
    std::cout << "You entered: " << d << "\n";
    
    return 0;
}
