#include <iostream>
#include <cmath>
int main() {
    // speeds for 1st and 2nd car
    double V1 = 0, V2 = 0;
    std::cout << "Enter speeds for 1st and 2nd car: \n";
    std::cin >> V1 >> V2;

    if(V1 <= 0 || V2 <= 0) {
        std::cout << "Error: speed must be non-negative or < zero : \n";
        return 1;
    }

    double S = 0;
    std::cout << "Enter distance between car: \n";
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
    //std::cout << V_total << "\n";
    double S_total = T * V_total;
    //std::cout << S_total << "\n";
    double distance = 0;
    //std::cout << distance << "\n";

    if(S > S_total) {
        distance = S - S_total;
    } else {
        distance = S_total - S;
    }

    std::cout << "Total speed is: \t" << "|" << V_total << "| km/h \n";
    std::cout << "Common path is: \t" << "|" << S_total << "| km \n";
    std::cout << "Distance between cars through " << T << " hours is: \t" << "|" << distance << "| km \n";

    return 0;
}