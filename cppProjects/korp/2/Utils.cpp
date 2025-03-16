#include "Utils.h"
int mySqrt(int x) {
    if (x < 0) {
        throw std::invalid_argument("Нельзя вычесть корень из числа ниже 0");
    }

    if (x == 0 || x == 1) {
        return x;
    }
}