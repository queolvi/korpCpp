#include "Divide.h"
#include <iostream>
int main () {
    myDivide myDiv;
    int a_, b_;
    std::cout << "Enter two nums: \n";
    std::cin >> a_ >> b_;

    int res = myDiv(a_, b_);
    std::cout << res << "\n";

    return 0;
}