#include "Fraction.hpp"



int main () {

    int dn_1 = 0, dm_1 = 0, dn_2 = 0, dm_2 = 0;
    std::cin >> dn_1 >> dm_1 >> dn_2 >> dm_2;

    myFraction F1(dn_1, dm_1);
    myFraction F2(dn_2, dm_2);

    std::cout << "What are you wanna do with yours Fractions? \n";
    std::cout << "If you enter: \n"
    <<  "1 - f1 plus f2 \n"
    << "2 - f1 sub f2 \n"
    << "3 - f1 mult f2 \n"
    << "4 - f1 div f2 \n ";
    
    int choice = 0;
    std::cin >> choice;
    
    if (choice == 1) {
        myFraction res = F1 + F2;
        std::cout << "Res: \n "<< res << " \n";
    } else if (choice == 2) {
        myFraction res = F1 - F2;
        std::cout << "Res: \n "<< res << " \n";
    } else if (choice == 3) {
        myFraction res = F1 * F2;
        std::cout << "Res: \n "<< res << " \n";
    } else if (choice == 4) {
        myFraction res = F1 / F2;
        std::cout << "Res: \n "<< res << " \n";
    } else {
        std::cout << "Invalid input.. \n";
    }
    
    
    
    return 0;
}