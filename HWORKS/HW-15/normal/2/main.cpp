#include "gender.h"
#include "student.h"
#include <iostream>
int main() {

    Gender StudentGender;
    unsigned int choice = 0;
    
    std::cout << "Choose student gender : \n";
    std::cout << "1. Male \n";
    std::cout << "2. Female \n";
    if(choice >> 1) {
        StudentGender = Gender::Male;  
    }

    return 0;
}