#include "foo.h"
#include <iostream>
int foo(const int& a, const int& b) {
    int sum = 0;
    for(int i = 0; i < b; ++i) {
        std::cout << i << "\n";
        sum++;
    }
    std::cout << "Res: " << sum << "\n";
    return 0;
}