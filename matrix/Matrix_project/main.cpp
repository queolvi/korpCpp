#include "matrix.hpp"
#include <iostream>

int main() {
    using IPO8381::Matrix;
    
    Matrix A(2, 2);
    Matrix B(2, 2);

    A[0][0] = 1; A[0][1] = 2;
    A[1][0] = 3; A[1][1] = 4;
    std::cout << "Matrix A:\n" << A << std::endl;

    B[0][0] = 4; B[0][1] = 3;
    B[1][0] = 2; B[1][1] = 1;
    std::cout << "Matrix B:\n" << B << std::endl;

    auto D = A.product(B);
    std::cout << "Product A*B:\n" << D << std::endl;

    auto E = A;
    std::cout << "Product A*A:\n" << E.product(E) << std::endl;
    
    bool res_matrix_a_is_square = A.is_matrix_square();  // Убрали аргумент
    std::cout << "Is A square? " << res_matrix_a_is_square << "\n";
    std::cout << "------------------------\n";
    
    Matrix m1(3,3);
    std::cout << "Enter elements for 3x3 matrix (row-wise):\n";
    std::cin >> m1[0][0] >> m1[0][1] >> m1[0][2]
             >> m1[1][0] >> m1[1][1] >> m1[1][2]
             >> m1[2][0] >> m1[2][1] >> m1[2][2]; 
    
    double det = m1.calculate_determinator_matrix();
    std::cout << "\nDeterminant of m1: " << det << "\n";
    
    bool is_reversible = m1.is_matrix_reversible();
    std::cout << "Is m1 reversible? " << is_reversible << "\n";
    
    if (is_reversible) {
        std::cout << "Inverse of m1:\n" << m1.inverse() << "\n";
    }

    return 0;
}
