#include <iostream>


int main () {

    int Mass = 0;
    std::cout << "Enter mass on kilograms: \n";
    std::cin >> Mass;

    if(Mass <= 0) {
        std::cout << "Mass must be non-negative or < zero \n";
        return 1;
    }
    int Ton = Mass / 1000;
    
    return 1;
}