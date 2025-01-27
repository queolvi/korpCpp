#include "student.h"
#include <iostream>
class Student {
    private:
    char Surname_[50], Name_[50], Patronymic_[50], Group_[50];
    int Age_;

    public:
    //конструктор по умолчанию
    Student() : Age_(0) {}   

    //конструктор с параметрами
    Student(char Surname_,  
    char Name_,
    char Patronymic_,
    char Group_,
    int Age_) : 
    Surname_(Surname_),
    Name_(Name_),
    Patronymic_(Patronymic_), 
    Group_(Group_), 
    Age_(Age_) 
    {}

    //конструктор копирования - копирование невозможно
    Student(const Student& other) = delete;

    //оператор присваивания копированием - копирование невозможно
    Student& operator = (const Student& other) = delete; 

    
    
};