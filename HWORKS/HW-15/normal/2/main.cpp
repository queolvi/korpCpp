#include "student.h"
#include <iostream>
int main() {

    unsigned int max_size = {50};

    char Surname_[max_size], Name_[max_size], Patronymic_[max_size], Group_[max_size];
    int Age_;

    std::cout << "Enter a Student surname, name, patronymic, and his group : \n";
    std::cin >> Surname_ >> Name_ >> Patronymic_ >> Group_;

    std::cout << Surname_ << "\n" << Name_ << "\n" << Patronymic_ << "\n" << Group_ << "\n";

    return 0;
}