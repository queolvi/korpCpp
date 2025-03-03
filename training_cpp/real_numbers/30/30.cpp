#include <iostream>

int main() {

    double T_c = 0, T_f = 0;
    std::cout << "Enter degrees on Celsius scale : \n"; std::cin >> T_c;

    if (T_f >= -40.0 && T_f <= 131.0) {
        
    } else {
        std::cout << "Invalid value on Fahrenheit scale! \n";
        return 1;
    }

    T_c = (T_f - 32) * 5/9;

    if(T_c >= -40 && T_c <= 55) {

    } else {
        std::cout << "Invalid value on Celsius scale! \n";
        return 1;
    }

    std::cout << "Result, how it, if convert degrees from Celsius to Fahrenheit scale == " << T_c << "\n";

    return 0;
}