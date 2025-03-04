#include <iostream>

int main () {

    int kg = 0; std::cout << "Enter kg of candies: \n"; std::cin >> kg;
    int price = 0; std::cout << "Enter price for the candies: \n"; std::cin >> price;
    int one_kg_price = 1 * price;
    int n_kg_price = kg * price;

    std::cout << "Price for 1 kg candies == " << one_kg_price << "\n";
    std::cout << "Price for " << kg << " candies == " << n_kg_price << "\n";

    return 0;
}