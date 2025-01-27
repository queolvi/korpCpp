#include "foo.hpp"
#include "template.hpp"
#include <iostream>

int main() {
    int x = 0;
    std::cout << "Enter num: \n"; 
    std::cin >> x;

    int res = calc(x, foo<int>);
    std::cout << "Result: " << res << std::endl;
    return 0;
}