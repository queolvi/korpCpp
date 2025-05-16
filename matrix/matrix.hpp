#include <stdexcept>
#include <iostream>
namespace
    
{
    template <typename T>
    void construct(T *p, const T rhs) {
        new(p) T(rhs);
    };

    template <typename T>
     void construct(T *p, T&& rhs) {
        new(p) T(std::move(rhs));
    };

    template <typename T> 
    void destroy(T *p) { p->~T();}

    template <typename FwdIter> 
    void destroy(FwdIter first, FwdIter last) { 
        while (first != last) {
            destroy(&*first++);
        }
    };
    template <typename T>
    class MyRowBuff {
    protected: 
         T *arr_;
         size_t size_;
    
    protected:
        MyRowBuff(const MyRowBuff&) = delete;
        MyRowBuff& operator=(MyRowBuff&) = delete; 
        MyRowBuff(MyRowBuff &&rhs) noexcept: 
            arr_(rhs.arr_), size_(rhs.size_) {
                rhs.arr_ = nullptr; 
                rhs.size_ = 0;
            };
        MyRowBuff& operator=(MyRowBuff &&rhs) noexcept{
                std::swap(arr_, rhs.arr_); 
                std::swap(size_, rhs.size_);
                return *this;
            };
        MyRowBuff(size_t sz = 0): arr_((sz == 0) ? nullptr 
            : static_cast<T*>(::operator new (sizeof(T) * sz))) ,size_(sz) {};

        ~MyRowBuff() {
            destroy(arr_, arr_ + size_);
            ::operator delete(arr_);
            };
    };
    
    
    class MatrixRow : private MyRowBuff<double> { 
        public: 
        using MyRowBuff::arr_;
        using MyRowBuff::size_;

        explicit MatrixRow(size_t sz = 0);
        MatrixRow(const MatrixRow&);
        MatrixRow(MatrixRow &&rhs) = default;
        MatrixRow& operator=(MatrixRow &&rhs) = default;
        MatrixRow& operator=(const MatrixRow&);
        size_t size() const noexcept;
        double& operator[](size_t index) &;      
        const double& operator[](size_t index) const &;      
    };
} 

namespace IPO8381 {
class Matrix : private MyRowBuff<MatrixRow>
{
    private:
        using Rows = MyRowBuff<MatrixRow>;
        using Rows::arr_;
        using Rows::size_;


    public:
        Matrix(const Matrix& rhs);
        Matrix& operator=(const Matrix& rhs);
        Matrix(Matrix&& rhs) = default;
        Matrix& operator=(Matrix&& rhs) = default;
        Matrix(size_t nrows, size_t ncolumns);
        MatrixRow& operator[](size_t index) &;      
        const MatrixRow& operator[](size_t index) const &; 
        size_t ncols() const;
        size_t nrows() const;
        void dump(std::ostream& os ) const;
    public:

    Matrix operator-() const;
    Matrix& operator+=(const Matrix& rhs);
    Matrix& operator-=(const Matrix& rhs);
    Matrix product(const Matrix& rhs) const;
    };

    Matrix operator+(const Matrix& lhs, const Matrix& rhs);
    Matrix operator-(const Matrix& lhs, const Matrix& rhs);
    }