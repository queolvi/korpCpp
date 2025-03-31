#include "Divide.h"

int myDivide::operator()(int a, int b) {
    if(b == 0) throw std::runtime_error("Error: b = zero");
    int res = a / b;
    return res;
}