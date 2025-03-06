#include <iostream>
int main () {


    int chock_cand_kg, price_for_chock_cand;
    int tofee_cand_kg, price_for_tofee_cand;

    std::cout << "Enter how many you wanna chockolate candies: \n"; std::cin >> chock_cand_kg;
    std::cout << "Enter price for 1 kg chockolate candies: \n"; std::cin >> price_for_chock_cand;

    std::cout << "Enter how many you wanna tofee candies: \n"; std::cin >> tofee_cand_kg;
    std::cout << "Enter price for 1 kg tofee candies: \n";

    int oneKg_chock = chock_cand_kg * 1 * price_for_chock_cand;
    int oneKg_tofee = tofee_cand_kg * 1 * price_for_tofee_cand;

    std::cout << "Price of 1 kg chockolate candies: " << oneKg_chock << "\n";
    std::cout << "Price of 1 kg tofee candies: " << oneKg_tofee << "\n";

    double res = (chock_cand_kg * price_for_chock_cand) / (tofee_cand_kg * price_for_tofee_cand);
    std::cout << "Result about how many more price chockolate candies than tofee candies: " << res << "\n";
}