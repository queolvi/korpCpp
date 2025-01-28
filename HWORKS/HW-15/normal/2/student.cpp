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
   
    Student& operator=(const Student& rhs) = delete;

    Student(const Student& rhs) = delete;
    
    Student(const char* name, Gender g) : gen(g) 
    {
        std::memcpy (&name, Surname_, 50);
        std::memcpy (&name, Name_, 50);
        std::memcpy (&name, Patronymic_, 50);
        std::memcpy (&name, Group_, 50);
        
    }


    //конструктор копирования - копирование невозможно
    //Student(const Student& other) = delete;

    //оператор присваивания копированием - копирование невозможно
   // Student& operator = (const Student& other) = delete; 

    
    
};