#include "Fraction.hpp"

myFraction::myFraction(int nm, int dm) : nm(nm), dm(dm) {
    if(dm == 0) {throw std::invalid_argument("Error: Denominator can not be 0.."); }
};

myFraction myFraction::operator-() const {
    myFraction res = myFraction(-nm, -dm);
    return res;
}

int myFraction::getNum() const { return nm; }
int myFraction::getDenom() const { return dm; }

myFraction operator+(const myFraction& f1, const myFraction& f2) {
    int res = f1.getNum() * f2.getDenom() + f1.getDenom() * f2.getNum();
    myFraction res_Fraction = myFraction(res, f2.getDenom() * f1.getDenom());
    return res_Fraction;
}
myFraction operator-(const myFraction& f1, const myFraction& f2) {
    myFraction res = f1 + (-f2);
    return res;
}
myFraction operator*(const myFraction& f1, const myFraction& f2) {
    myFraction res = myFraction(f1.getNum() * f2.getNum(), f1.getDenom() * f2.getDenom());
    return res;
}
myFraction operator/(const myFraction& f1, const myFraction& f2) {
    try {
        myFraction res = f1 * myFraction(f2.getDenom(), f2.getNum());
        return res;
    } catch (std::invalid_argument& e) {
        throw;
    }
}
std::ostream& operator<<(std::ostream& os, const myFraction& f) {
    os << f.getNum() << "/" << f.getDenom();
    return os;
}