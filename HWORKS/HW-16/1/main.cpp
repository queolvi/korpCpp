#include "acid_solution.hpp"
#include <iostream>

int main() {
  int volume_1 = 0, percent_1 = 0;
  std::cout << "Enter a volume and percent for first acid solution: \n";
  std::cin >> volume_1 >> percent_1;
  HW::Acid_solution solution_1(volume_1, percent_1);

  int volume_2 = 0, percent_2 = 0;
  std::cout << "Enter a volume and percent for second acid solution: \n";
  std::cin >> volume_2 >> percent_2;
  HW::Acid_solution solution_2(volume_2, percent_2);

  double new_concentracion = solution_1.calculate_concentration(solution_2);
  std::cout << "New concentracion: " << new_concentracion << " % \n";

  return 0;
}