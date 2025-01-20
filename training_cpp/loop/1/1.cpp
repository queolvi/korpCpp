#include<iostream>

int count(int k, int n);

int main() {

	int n_count = 0, k = 0;
	std::cout << "Enter how many you wanna see a num: \n"; std::cin >> n_count;
	std::cout << "Enter number, that you wanna to see: \n"; std::cin >> k;

	count(k, n_count);

	return 0;
}


int count(int k, int n) {
	if(n <= 0) return 1;
	for(unsigned short i = 1; i < n; ++i) {
		std::cout << i << " : "<< k << "\n";
	}
	return 0;
}
