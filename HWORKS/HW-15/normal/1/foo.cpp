#include "foo.hpp"
#include "f.hpp"
double foo(int x, double (*f)(double) ) {
    double sum = 0;
    for(unsigned i = 1; i <= x + 1; ++i) {
        sum += f(x / i);
    }
    return sum;
}