#include "rational.hpp"

void Rational::simplify() {
    if (denominator_ == 0) {
        throw std::invalid_argument("Denominator cannot be zero");
    }
    
    if (denominator_ < 0) {
        numerator_ = -numerator_;
        denominator_ = -denominator_;
    }
    
    int gcd = std::gcd(numerator_, denominator_);
    numerator_ /= gcd;
    denominator_ /= gcd;
}

Rational::Rational() : numerator_(0), denominator_(1) {}
Rational::Rational(int num) : numerator_(num), denominator_(1) {}
Rational::Rational(int num, int denom) : numerator_(num), denominator_(denom) {
    simplify();
}

Rational::Rational(const Rational& other) = default;
Rational::Rational(Rational&& other) noexcept = default;

Rational& Rational::operator=(const Rational& other) = default;
Rational& Rational::operator=(Rational&& other) noexcept = default;

Rational Rational::operator+(const Rational& other) const {
    return Rational(numerator_ * other.denominator_ + other.numerator_ * denominator_,
                   denominator_ * other.denominator_);
}

Rational Rational::operator-(const Rational& other) const {
    return Rational(numerator_ * other.denominator_ - other.numerator_ * denominator_,
                   denominator_ * other.denominator_);
}

Rational Rational::operator*(const Rational& other) const {
    return Rational(numerator_ * other.numerator_, denominator_ * other.denominator_);
}

Rational Rational::operator/(const Rational& other) const {
    if (other.numerator_ == 0) {
        throw std::invalid_argument("Cannot divide by zero");
    }
    return Rational(numerator_ * other.denominator_, denominator_ * other.numerator_);
}

Rational& Rational::operator+=(const Rational& other) {
    *this = *this + other;
    return *this;
}

Rational& Rational::operator-=(const Rational& other) {
    *this = *this - other;
    return *this;
}

Rational& Rational::operator*=(const Rational& other) {
    *this = *this * other;
    return *this;
}

Rational& Rational::operator/=(const Rational& other) {
    *this = *this / other;
    return *this;
}

Rational Rational::operator-() const {
    return Rational(-numerator_, denominator_);
}

Rational Rational::operator+() const {
    return *this;
}

bool Rational::operator==(const Rational& other) const {
    return numerator_ == other.numerator_ && denominator_ == other.denominator_;
}

bool Rational::operator!=(const Rational& other) const {
    return !(*this == other);
}

bool Rational::operator<(const Rational& other) const {
    return numerator_ * other.denominator_ < other.numerator_ * denominator_;
}

bool Rational::operator>(const Rational& other) const {
    return other < *this;
}

bool Rational::operator<=(const Rational& other) const {
    return !(*this > other);
}

bool Rational::operator>=(const Rational& other) const {
    return !(*this < other);
}

int Rational::numerator() const { return numerator_; }
int Rational::denominator() const { return denominator_; }

Rational::operator double() const {
    return static_cast<double>(numerator_) / denominator_;
}

void Rational::dump(std::ostream& os) const {
    if (denominator_ == 1) {
        os << numerator_;
    } else {
        os << numerator_ << '/' << denominator_;
    }
}

Rational operator+(int lhs, const Rational& rhs) {
    return Rational(lhs) + rhs;
}

Rational operator-(int lhs, const Rational& rhs) {
    return Rational(lhs) - rhs;
}

Rational operator*(int lhs, const Rational& rhs) {
    return Rational(lhs) * rhs;
}

Rational operator/(int lhs, const Rational& rhs) {
    return Rational(lhs) / rhs;
}

std::ostream& operator<<(std::ostream& os, const Rational& rat) {
    rat.dump(os);
    return os;
}

std::istream& operator>>(std::istream& is, Rational& rat) {
    int num, denom = 1;
    char slash;
    
    is >> num;
    if (is.peek() == '/') {
        is >> slash >> denom;
    }
    
    rat = Rational(num, denom);
    return is;
}
