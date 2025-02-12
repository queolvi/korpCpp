#ifdef AAA

#include <iostream>
#include <array>
#include <vector>
int main() {

    unsigned size_ = 0; std::cin >> size_;
    char* symbols = new char[size_];

    for(int i = 0; i < size_; ++i) {
        std::cin >> symbols[i];
    }

    if(sizeof(symbols) <= 10) {
        for(int i = 0; i < size_; ++i) { 
            std::cout << symbols[i];
        }
    } else {
        // start
        std::cout << symbols[0]; 
        // middle
        int old_sum = 0;
        for(int i = 0; i < size_; ++i) {

            int sum = 0;
            if(i != symbols[0]) sum += symbols[i];
            if(i != symbols[size_ - 1]) sum += symbols[i];

            old_sum += sum;
        }

        std::cout << old_sum;

        // end
        for(int i = 0; i == size_; ++i) {
            if(i == size_) std::cout << symbols[i];
        }
    }

    delete [] symbols;
    return 0;
}
#endif

#include <iostream>

int main() {
    unsigned size_ = 0;
    std::cin >> size_;

    char* symbols = new char[size_];

    for (unsigned i = 0; i < size_; ++i) {
        std::cin >> symbols[i];
    }

    if (size_ <= 10) {
        for (unsigned i = 0; i < size_; ++i) {
            std::cout << symbols[i];
        }
        std::cout << std::endl;  
    } else {
        // start
        std::cout << symbols[0];

        // middle
        std::cout << size_ - 2; 

        // end
        std::cout << symbols[size_ - 1]; 
        std::cout << std::endl; 
    }

    delete[] symbols;
    return 0;
}