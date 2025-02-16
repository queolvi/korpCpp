#include "acid_solution.hpp"

#include <iostream>
#include <stdexcept>

namespace HW {
Acid_solution::Acid_solution(int volume, int percent)
    : volume(volume),
      material(static_cast<double>(volume) * (percent / 100.0)) {
  if (volume < 0) {
    throw std::invalid_argument("Error: Volume must be non-negative.");
  }
  if (percent < 0 || percent > 100) {
    throw std::invalid_argument("Error: Percent must be between 0 and 100.");
  }
}

std::pair<int, double> Acid_solution::getter() const {
  return std::make_pair(volume, material);
}

double Acid_solution::calculate_concentration(const Acid_solution& other) const {
  double total_volume = static_cast<double>(volume) + other.volume;
  double total_material = material + other.material;
  if (total_volume == 0.0) {
    return 0.0;
  }
  return (total_material / total_volume) * 100.0;
}
}  