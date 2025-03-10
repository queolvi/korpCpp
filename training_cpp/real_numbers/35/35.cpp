#include <iostream>

int main() {
    double V1 = 0, V2 = 0;
    std::cout << "Enter speeds for 1st and 2nd car: \n";
    std::cin >> V1 >> V2;

    if(V1 <= 0 || V2 <= 0) {
        std::cout << "Error: speed must be non-negative or < zero : \n";
        return 1;
    }

    double S = 0;
    std::cout << "Enter distance between cars: \n";
    std::cin >> S;

    if(S <= 0) {
        std::cout << "Error: Distance between car dont be lower than 1 or = 1 \n";
        return 1;
    }

    double T = 0;
    std::cout << "Enter time of movement: \n";
    std::cin >> T;

    if(T <= 0) {
        std::cout << "Time can't be negative or = zero: \n";
        return 1;
    }

    double V_total = V1 + V2;
    double S_total = T * V_total;
    double distance = S + S_total;

    std::cout << "Total speed is: \t" << "|" << V_total << "| km/h \n";
    std::cout << "Common path is: \t" << "|" << S_total << "| km \n";
    std::cout << "Distance between cars through " << T << " hours is: \t" << "|" << distance << "| km \n";

    return 0;
}