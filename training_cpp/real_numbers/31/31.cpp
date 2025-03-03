#include <iostream>

int main() {

    double T_c = 0, T_f = 0;
    std::cout << "Enter degrees on scale Fahrenheit: \n"; std::cin >> T_c;

    if (T_f >= -40.0 && T_f <= 131.0) {
        
    } else {
        std::cout << "Invalid value on Fahrenheit scale! \n";
        return 1;
    }

    T_f = (T_c * 5/9) + 32;

    if(T_c >= -40 && T_c <= 55) {

    } else {
        std::cout << "Invalid value on Celsius scale! \n";
        return 1;
    }   

    std::cout << "Result, how it, if convert degrees from Fahrenheit to Celsius == " << T_f << "\n";

    return 0;
}