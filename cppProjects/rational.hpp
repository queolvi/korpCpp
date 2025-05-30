#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
#include <numeric>
#include <stdexcept>
#include <string>

class Rational {
private:
    int numerator_;
    int denominator_;

    void simplify();

public:
    Rational();
    explicit Rational(int num);
    Rational(int num, int denom);
    
    Rational(const Rational& other);
    Rational(Rational&& other) noexcept;
    ~Rational() = default;
    
    Rational& operator=(const Rational& other);
    Rational& operator=(Rational&& other) noexcept;
    
    Rational operator+(const Rational& other) const;
    Rational operator-(const Rational& other) const;
    Rational operator*(const Rational& other) const;
    Rational operator/(const Rational& other) const;
    
    Rational& operator+=(const Rational& other);
    Rational& operator-=(const Rational& other);
    Rational& operator*=(const Rational& other);
    Rational& operator/=(const Rational& other);
    
    Rational operator-() const;
    Rational operator+() const;
    
    bool operator==(const Rational& other) const;
    bool operator!=(const Rational& other) const;
    bool operator<(const Rational& other) const;
    bool operator>(const Rational& other) const;
    bool operator<=(const Rational& other) const;
    bool operator>=(const Rational& other) const;
    
    int numerator() const;
    int denominator() const;
    
    explicit operator double() const;
    
    void dump(std::ostream& os) const;
};

Rational operator+(int lhs, const Rational& rhs);
Rational operator-(int lhs, const Rational& rhs);
Rational operator*(int lhs, const Rational& rhs);
Rational operator/(int lhs, const Rational& rhs);

std::ostream& operator<<(std::ostream& os, const Rational& rat);
std::istream& operator>>(std::istream& is, Rational& rat);

#endif
