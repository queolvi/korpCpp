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

    std::cout << Mass << " kg to Ton == " << Ton << "\n";


    if(Mass >= 0) {
        std::cout << "do you wanna check, if result == 0, maybe he nust be 0.1-0.9 ?\n";
        std::cout << "if you agree, enter 1, or 0 if not: \n";
        bool choice;
        std::cin >> choice;
        if(choice == true) {
            Mass = static_cast<double>(Mass);
            Ton = static_cast<double>(Ton);
            
            std::cout << "Result: " << Ton << "\n";
        } else if(choice == false) {
            std::cout << "You reject changes. \n";
        }
    }
    
    return 0;
}