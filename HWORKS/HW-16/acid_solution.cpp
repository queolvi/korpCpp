#include "acid_solution.hpp"
#include <iostream>
 HW::Acid_solution::Acid_solution(int volume = 0, int percent = 100) : volume(volume), static_cast<int>(volume) * (percent / 100.0);    {
    if (value < 0) throw std::invalid_argument("Error, volume should be > 0 !!!");
    if (percent < 0 || percent > 100) throw std::invalid_argument("Error, percent should be > 0 or < 100 !!!");
 }
