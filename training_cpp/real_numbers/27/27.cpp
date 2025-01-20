#include<iostream>
#include<cmath>
int main() {

	double a = 0, a_pow = 0, a_for_null = 0;
	std::cout << "Enter num: "; std::cin >> a;

	a_for_null  = a;
	a_pow = a * a;
	std::cout << "Your num^2 : " << a_pow << "\n";
	a_pow *= a;
	std::cout << "Your num^3 : " << a_pow << "\n";
	a_pow = (a_pow * a_pow) - a_pow;
	std::cout << "Your num^5 : " << a_pow << "\n";
	a = std::pow(a, 1) * 0;
	std::cout << "Your num^1 * 0 : " << a << "\n";
	a_for_null = std::pow(a_for_null, 1) * 5;
	std::cout << "Your num^1 * 5" << a_for_null;
	//3

	return 0;
}
