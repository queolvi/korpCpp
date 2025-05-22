#include "matrix.hpp"
#include <utility>

MatrixRow::MatrixRow(size_t sz) : MyRowBuff(sz) {};

MatrixRow::MatrixRow(const MatrixRow&rhs) : MyRowBuff(rhs.size_) {
    size_ = 0;
    while (size_ < rhs.size_)
    {
        construct(arr_ + size_, rhs.arr_[size_]);
        ++size_;
    }
    
};

MatrixRow& MatrixRow::operator=(const MatrixRow &rhs) {
    if (&rhs == this) return *this;
    MatrixRow tmp(rhs);
    std::swap(*this, tmp);
    return *this;
};


size_t MatrixRow::size() const noexcept{
    return size_;
}

double& MatrixRow::operator[](size_t index) & {
    return arr_[index];
} 


const double& MatrixRow::operator [](size_t index) const &  {
    return arr_[index];
} 
IPO8381::Matrix::Matrix(const IPO8381::Matrix& rhs): Rows(rhs.size_) {
    size_t current = 0;
    while (current < rhs.size_) 
    {
        construct(arr_ +  current, rhs.arr_[current]);
        current++;
    }

    
}

IPO8381::Matrix& IPO8381::Matrix::operator=(const IPO8381::Matrix &rhs) {
    if (&rhs == this) return *this;
    Matrix tmp(rhs);
    std::swap(*this, tmp);
    return *this;
}

IPO8381::Matrix::Matrix(size_t nrows, size_t ncols): Rows(nrows) {
    size_t current = 0;
    while (current < nrows) {
        construct(arr_ +  current, MatrixRow(ncols));
        current++;
    }
}

MatrixRow& IPO8381::Matrix::operator[](size_t index) & {return arr_[index];}
const MatrixRow& IPO8381::Matrix::operator[](size_t index) const & {return arr_[index];};

size_t IPO8381::Matrix::ncols() const {if (!arr_) return 0; return arr_[0].size_;};
size_t IPO8381::Matrix::nrows() const {return size_;};



IPO8381::Matrix IPO8381::Matrix::operator-() const {
    Matrix result(*this);
    for (size_t i = 0, cols = ncols(); i<cols; i++) {
        for (size_t j = 0, rows=nrows(); j<rows; ++j) {
            result[j][i] = -result[j][i];
        }
    }
    return result;
}

IPO8381::Matrix& IPO8381::Matrix::operator+=(const IPO8381::Matrix& rhs) {
    if (nrows() != rhs.nrows() || ncols() != rhs.ncols()) {
        throw std::invalid_argument("Matrix have to have equal cols and rows");
    }

    for (size_t i = 0, cols = ncols(); i<cols; i++) {
        for (size_t j = 0, rows=nrows(); j<rows; ++j) {
            arr_[j][i] += rhs[j][i];
        }
    }
    return *this;
}


IPO8381::Matrix& IPO8381::Matrix::operator-=(const IPO8381::Matrix& rhs) {
    *this += (-rhs);
    return *this;
}

IPO8381::Matrix IPO8381::operator+(const IPO8381::Matrix& lhs, const IPO8381::Matrix& rhs) {
    IPO8381::Matrix res(lhs);
    res += rhs;
    return res;
}

IPO8381::Matrix IPO8381::operator-(const Matrix& lhs, const Matrix& rhs) {
    return lhs + (-rhs);
}


IPO8381::Matrix IPO8381::Matrix::product(const IPO8381::Matrix& rhs) const {
    if (ncols() != rhs.nrows()) {
        throw std::invalid_argument("ncols lhs have to equal nrows rhs!");
    }
    
    IPO8381::Matrix res(nrows(),  rhs.ncols());
    
    for (size_t i = 0, cols = nrows(); i<cols; i++) {
        for (size_t j = 0, rows=rhs.ncols(); j<rows; ++j) {
            res[j][i] = 0;
   
            for (size_t k = 0, sz = ncols(); k<sz; k++) 
                res[j][i] += arr_[i][k] + rhs[k][j];
        }
    
    }
    return res;
}