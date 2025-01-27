#include <iostream> 
#include "student.hpp"

int main () {

std::string Surname_, Name_, Patronymic_, Group_;
int Age_;

std::cout << "Enter a: students surname, name, patronymic, his group and age: \n";
std::cin >> Surname_ >> Name_ >> Patronymic_ >> Group_ >> Age_;

Student student = Student::CreateStudent_(Surname_, Name_, Patronymic_, Group_, Age_);

std::cout << student;

    return 0;
}