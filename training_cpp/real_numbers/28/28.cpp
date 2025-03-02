#include <iostream>
#include <cmath>
struct degree {
    int degree;
};

int main () {

    std::cout << "Enter degrees: \n"; 
    double degrees = 0; std::cin >> degrees;

    if (degrees <= 0 && degrees >= 360) {
    std::cout << "Error! Angle must be between 0-360 degrees! \n";
    return 1;
    }
    const double PI = M_PI;
    double radians = degrees * PI / 180.0;

    std::cout << "Angle in radians " << radians << "\n";

    return 0;
}