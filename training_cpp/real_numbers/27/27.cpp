#include<iostream>
#include<cmath>
int main() {


	std::cout << "Enter num: ";
	long long a = 0; std::cin >> a;

	std::cout << "\n\n";

	long long pow_2 = a * a;	std::cout << pow_2 << "\n";
	long long pow_3 = pow_2 * a;	std::cout << pow_3 << "\n";
	std::cout << pow_2 * pow_3 << "\n";
	std::cout << a * 1 * 5;

	return 0;
}
