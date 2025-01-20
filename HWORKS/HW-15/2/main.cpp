#include <iostream> 
#include "student.hpp"

int main () {

std::string Surname_, Name_, Patronymic_, Group_;
int Age_;

std::cout << "Enter a: students surname, name, patronymic, his group and age: \n";
std::cin >> Surname_ >> Name_ >> Patronymic_ >> Group_ >> Age_;

Student student = Student::CreateSudent_(Surname_, Name_, Patronymic_, Group_, Age_); 

std::cout << "\n\nInformation about studemt: \n" <<
"Surname - " << student.Surname_<< "\n" <<
"Name - " << student.Name_ << "\n" <<
"Patronymic - " << student.Patronymic_ << "\n" <<
"Group - " << student.Group_ << "\n" <<
"Age - " << student.Age_ << "\n";  

    return 0;
}