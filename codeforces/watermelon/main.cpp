#include <iostream>

bool wm(int w);

int main() {

int w = 0;
std::cin >> w;

if( wm(w) == true ) std::cout << "NO";
else std::cout << "YES";

    return 0;
}

bool wm(int w) {
    if(w < 4 || w % 2 != 0) {
        return 1;
    } else {
        return 0;
    }
}