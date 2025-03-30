#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <stdexcept>
class myFraction {
    private:
    int nm, dm;
    public:

    myFraction(int nm, int dm);
    myFraction operator-() const;
    int getNum() const;
    int getDenom() const;
  
};

myFraction operator+(const myFraction& f1, const myFraction& f2);
myFraction operator-(const myFraction& f1, const myFraction& f2);
myFraction operator*(const myFraction& f1, const myFraction& f2);
myFraction operator/(const myFraction& f1, const myFraction& f2);
std::ostream& operator<<(std::ostream& os, const myFraction& f);
#endif