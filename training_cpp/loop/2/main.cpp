#include<iostream>
#include "foo.h"
int main() {
    int b = 0;
    std::cout << "Enter size of the array: \n";
    std::cin >> b;
    std::cout << "Enter elements for your array: \n";
    int *a = new int[b];
    for(int i = 0; i < b; ++i) {
        std::cin >> a[i];
    } 
    std::cout << "Res: \n" << foo(*a, b);
    return 0;
}