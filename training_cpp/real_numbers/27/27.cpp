#include<iostream>
#include<cmath>
int main() {

	#ifdef AAA
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
	#endif
	
	//#ifdef BBB
	std::cout << "Enter num: ";
	long long a = 0; std::cin >> a;
	std::cout << "\n\n";
	long long pow_2 = a * a;	std::cout << pow_2 << "\n";
	long long pow_3 = pow_2 * a;	std::cout << pow_3 << "\n";
	long long pow_5 = pow_2 * pow_3;	std::cout << pow_5 << "\n";
	long long pow_1_mult_5 = a * 1 * 5;	std::cout << pow_1_mult_5 << "\n";
	//#endif
	
	return 0;
}
