#include "student.h"
#include <iostream>
#include <cstring>

enum class Gender  {Male, Female};

class Student {
    private:
    char Surname_[50], Name_[50], Patronymic_[50], Group_[50];
    int Age_;
    Gender gen;

    public:
    //конструктор по умолчанию
    Student() = delete;

   Student(const Student& rhs) : gen(rhs.gen), Age_(rhs.Age_) {
    std::memcpy(Surname_, rhs.Surname_, 50);
    std::memcpy(Name_, rhs.Name_, 50);
    std::memcpy(Patronymic_, rhs.Patronymic_, 50);
    std::memcpy(Group_, rhs.Group_, 50);
   }
   
    Student& operator=(const Student& rhs) {
    if(this != &rhs) {
        std::memcpy(Surname_, rhs.Surname_, 50);
        std::memcpy(Name_, rhs.Name_, 50);
        std::memcpy(Patronymic_, rhs.Patronymic_, 50);
        std::memcpy(Group_, rhs.Group_, 50);
        gen = rhs.gen;
        Age_ = rhs.Age_;
        }
    return *this;
    };

    //конструктор копирования - копирование невозможно
    //Student(const Student& other) = delete;

    //оператор присваивания копированием - копирование невозможно
   // Student& operator = (const Student& other) = delete; 

    
    
};