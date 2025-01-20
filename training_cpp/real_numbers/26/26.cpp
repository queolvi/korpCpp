#include<iostream>

	int main() {

		double a = 0, b = 0;
		std::cout << "Enter num: \n"; std::cin >> a;
		std::cout << "\n Your num: \n" << a;

		b = a * a;
		std::cout << "Num^2 : " << b << "\n";
		b *= b;
		std::cout << "Num^4 : " << b << "\n";
		b *= b;
		std::cout << "Num^8 : " << b << "\n";



		return 0;
	}
