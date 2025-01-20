#include<string>
class Student {
    public:
    std::string Surname_, Name_, Patronymic_, Group_;
    int Age_;

    static Student CreateSudent_(const std::string& Surname_,
    const std::string& Name_,
    const std::string& Patronymic_,
    const std::string& Group_,
    const int& Age_) 
    { return Student(Surname_, Name_, Patronymic_, Group_, Age_); }

    private:
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
};