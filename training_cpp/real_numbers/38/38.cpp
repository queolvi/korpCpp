#include <iostream>
#include <stdexcept>
int mySqrt(int x);

int main () {

    double A = 0, B = 0, C = 0;
    std::cout << "Enter A, B and C for quadratic equation: \n";
    std::cin >> A >> B >> C;

    if(A == 0) {
        std::cout << "Error: 'A' must be non-zero! \n";
        return 1;
    }

    double D = B * B - 4 * A * C;
    std::cout << "Discriminant == " << D << "\n";

    double X1 = (-B + mySqrt(D)) / (2 * A);
    double X2 = (-B - mySqrt(D)) / (2 * A);

    if(X1 > X2) {
        std::cout << "X1 = " << X2 << "\n" << "X2 = " << X1 << "\n";
    } else {
        std::cout << "X1 = " << X1 << "\n" << "X2 = " << X2 << "\n";
    }

    return 0;
}

int mySqrt(int x) {
    if (x < 0) {
        throw std::invalid_argument("You can't sub the root of a number below 0.");
    }

    if (x == 0 || x == 1) {
        return x;
    }

    double guess = x / 2.0;
    double epsilon = 0.00001;

    while (true) {
        double nextGuess = (guess + x / guess) / 2.0;
        if (abs(nextGuess - guess) < epsilon) {
            return nextGuess;
        }
        guess = nextGuess;
    }
}