#include<string>
class Student {
    private:
    std::string Surname_, Name_, Patronymic_, Group_;
    int Age_;

    public:
    //конструктор по умолчанию
    Student() : Age_(0) {}   

    //конструктор с параметрами
    Student(const std::string& Surname_,
    const std::string& Name_,
    const std::string& Patronymic_,
    const std::string& Group_,
    const int& Age_) : 
    Surname_(Surname_) ,
    Name_(Name_),
    Patronymic_(Patronymic_), 
    Group_(Group_), 
    Age_(Age_) 
    {}

    //конструктор копирования - разрешение дано(дефолтом)
    Student(const Student& other) = default;

    //оператор присваивания копированием - разрешение дано(дефолтом)
    Student& operator = (const Student& other) = default; 

    //статический метод для создания объекта
    static Student CreateStudent_(const std::string& Surname_,
    const std::string& Name_,
    const std::string& Patronymic_,
    const std::string& Group_,
    int Age_) 
    { return Student(Surname_, Name_, Patronymic_, Group_, Age_); }

    //получаение доступа оператору (operator <<) к классу Student, который не является членом класса Student
    friend std::ostream& operator <<(std::ostream & os, const Student& s) {
    os << "Surname - " << s.Surname_<< "\n";
    os << "Name - " << s.Name_ << "\n";
    os << "Patronymic - " << s.Patronymic_ << "\n";
    os << "Group - " << s.Group_ << "\n";
    os << "Age - " << s.Age_ << "\n";
    return os;
    }


};