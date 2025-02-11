#pragma once
#include <utility>
namespace HW{
class Acid_solution {
    private:
    int value;
    double material;

    public:
    Acid_solution(int volume = 0, int percent = 100);
    std::pair<int, double> getter () const;
    double calculate_concentration(const Acid_solution& first_sol, const Acid_solution& second_sol);
};
}