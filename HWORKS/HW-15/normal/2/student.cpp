#include "student.h"
#include <iostream>
class Student {
    private:
    char Surname_[50], Name_[50], Patronymic_[50], Group_[50];
    int Age_;

    public:
    //конструктор по умолчанию
    Student() : Age_(0) {}   

    

    //конструктор копирования - копирование невозможно
    Student(const Student& other) = delete;

    //оператор присваивания копированием - копирование невозможно
    Student& operator = (const Student& other) = delete; 

    
    
};