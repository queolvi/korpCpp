#include "Person.h"

Person::Person(int age) : age(age) {
    if(age < 0 || age > 120) {
        throw InvalidAgeException{};
    }
}
int Person::get_age() const {
    return age;
} 