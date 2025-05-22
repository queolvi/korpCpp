#include "matrix.hpp"

int main() {
    using IPO8381::Matrix;
    IPO8381::Matrix A(2, 2);
    IPO8381::Matrix B(2, 2);

    A[0][0] = 1; A[0][1] = 2;
    A[1][0] = 3; A[1][1] = 4;
    std::cout << A << std::endl;
#if 1
    B[0][0] = 4; B[0][1] = 3;
    B[1][0] = 2; B[1][1] = 1;
#endif
    std::cout << B << std::endl;
    auto D = A.product(B);
    std::cout << D << std::endl;
    auto E = A;
    std::cout << E.product(E) << std::endl;
    

    bool res_matrix_a_is_square = A.is_matrix_square(A);
    std::cout << res_matrix_a_is_square;

        


    return 0;
}//