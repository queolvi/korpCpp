#ifndef ACID_SOLUTION_HPP
#define ACID_SOLUTION_HPP

#include <utility>  

namespace HW {
class Acid_solution {
 private:
  int volume;
  double material;

 public:
  Acid_solution(int volume, int percent);
  std::pair<int, double> getter() const;
  double calculate_concentration(const Acid_solution& other) const;
};
}  

#endif