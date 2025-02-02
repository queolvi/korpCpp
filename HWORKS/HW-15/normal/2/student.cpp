#include "gender.h"
#include "student.h"
#include <iostream>
#include <cstring>



class Student {
    private:
    char Surname_[50], Name_[50], Patronymic_[50], Group_[50];
    int Age_;
    Gender gen;

    public:
    
    Student() = delete;
   
    Student& operator=(const Student& rhs) = delete;

    Student(const Student& rhs) = delete;
    
    Student(const char* name, Gender g) : gen(g) { 
       std::strncpy(Name_, name, 49);
       Name_[49] = '\0'; 
    }

    void SetSurname(const char* surname) {
        std::strncpy(Surname_, surname, 49);
        Surname_[49] = '\0';
    }

    void SetPatronymic(const char* patronymic) {
        std::strncpy(Patronymic_, patronymic, 49);
        Patronymic_[49] = '\0';
    }

    void SetSurname(const char* group) {
        std::strncpy(Group_, group, 49);
        Group_[49] = '\0';
    }

    void SetAge(int& age) {
        age = Age_;
    }
};