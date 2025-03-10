#include <iostream>

int main() {

    // A * x + B = 0; 

    double A = 0, B = 0;
    std::cout << "Enter A and B: \n";
    std::cin >> A >> B;

    /*36 * x * 6 = 0;
    36 * x = -6;
    x = 36 / 6;
    x = -6; */
    
    if(A != 0) {
        if(B != 0 ) {
        std::cout << A << " * " << " x " << B << " = 0 \n";
        std::cout << A << " * x " << "= " << -B << "\n";
        
        std::cout << "X = " << A/-B << "\n";
        } 
    } else {
        std::cout << "No roots! \n";
        return 1;    
    }

    

    return 0;
}
