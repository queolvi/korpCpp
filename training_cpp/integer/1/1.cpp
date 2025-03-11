#include <iostream>

int main () {

    int Length = 0;
    std::cout << "Enter length on santimeters: \n";
    std::cin >> Length;

    if (Length <= 0) {
        std::cout << "Error: Length must be non-negative or < 0 zero! \n";
        return 1;
    }

    double Meters = Length / 100;
    std::cout << Length << " santimeters on meters == " << Meters << "\n"; 


    return 0;
}