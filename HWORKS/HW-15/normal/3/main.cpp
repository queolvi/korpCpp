#include "point.hpp"
#include <iostream>
#include <cmath> 

int main() {
    Point A {5, 3}, B {16, -3};
    double dist = distance(A, B);
    std::cout << "Res: " << dist << "\n";
    return 0;
}