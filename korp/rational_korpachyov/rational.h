#ifndef RATIONAL_H
#define RATIONAL_H
#include "utils.h"
class Rational : public Numerator, public Denominator{
private:
Numerator Num;
Denominator Denum;  
public:

Rational(Numerator num, Denominator denum);
Rational operator-();
Rational operator++();
Rational operator++();
Rational operator++();
Rational operator--();
Rational operator--();
Rational operator=();
Rational operator==();
Rational operator+=();




};
#endif