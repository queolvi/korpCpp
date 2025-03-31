#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <stdexcept>

class InvalidAgeException final : public std::exception {};

class Person {
    int age;
    public:
    
    Person(int age);
    int get_age() const;

};




#endif