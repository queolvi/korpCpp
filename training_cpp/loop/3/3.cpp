#include <iostream>

int main () {

    int A = 0, B = 0;
    std::cout << "Ener two values for A and B: \n";
    std::cin >> A >> B;

    if (A > B) {
        return 1;
    }
    
    int count = 0;
    while (B > A) {
        if(A == B - 1) { break; }
        else {
        count++;
        ++A;
        std::cout << A << "\n"; 
        }
    }
    std::cout << "Count: " << count << "\n";

    return 0;
}