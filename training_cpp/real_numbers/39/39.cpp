#include <iostream>

int main () {

    double A1 = 0, B1 = 0, C1 = 0,
    A2 = 0, B2 = 0, C2 = 0;
    std::cout << "Enter A1, B1, C1, A2, B2, C2 for systems of linear equations: \n";
    std::cin >> A1 >> B2 >> C1 >> A2 >> B2 >> C2;

    double D = (A1 * B2) - (A2 * B1); 
    std::cout << "Discriminant == " << D << "\n";

    if(D == 0) {
        std::cout << "No solutions! \n";
        return 1;
    } 

    double x = (C1 * B2 - C2 * B1) / D;
    double y = (A1 * C2 - A2 * C1) / D;
    
    std::cout << "X == " << x << "\n";
    std::cout << "Y == " << y << "\n";

    return 0;
}