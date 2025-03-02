#include <iostream>
#include <cmath>

int main() {

    std::cout << "Enter radians: \n";
    double radians = 0; std::cin >> radians;

    const double PI = M_PI;

    if(radians <= 0 && 2 * PI) {
        std::cout << "Error! Angle must be between 0-360 degrees! \n";
        return 1;
    }
    
    double res = radians * 180 / PI;

    std::cout << "Total degrees: " << res << "\n";

    return 0;
}