#include "vec_lib.hpp"
#include <cmath>
IPO_lib::Vec3D::Vec3D(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {};
IPO_lib::Vec3D IPO_lib::Vec3D::operator+=(const IPO_lib::Vec3D& rhs) {
    x += rhs.x;
    y += rhs.y;
    z += rhs.z;
    return *this;
}

IPO_lib::Vec3D IPO_lib::Vec3D::operator-() const {
    IPO_lib::Vec3D tmp(-x, -y, -z);
    return tmp;
}

IPO_lib::Vec3D IPO_lib::Vec3D::operator-=(const IPO_lib::Vec3D& rhs) {
    *this += -rhs;
    return *this;
}

bool IPO_lib::Vec3D::operator==(const Vec3D& rhs) const {
    return this == &rhs;
} 

bool IPO_lib::Vec3D::operator!=(const Vec3D& rhs) const {
    return !(this == &rhs);
}

double IPO_lib::Vec3D::norm() const {
    double res = std::sqrt(x * x + y * y + z * z);
    return res;
}
double IPO_lib::Vec3D::projection(const IPO_lib::Vec3D& base) const {
    double res = scalar_product(*this, base) / base.norm();
    return ;
}

IPO_lib::Vec3D IPO_lib::Vec3D::koeff_product(double k) const {
    IPO_lib::Vec3D tmp {k * x, k * y, k * z};
    return tmp;
}

bool IPO_lib::Vec3D::is_zero() const {
    return x == 0 && y == 0 && z == 0;
}
bool IPO_lib::Vec3D::is_unit() const {
    double leng = this->norm();
    return leng == 1;
}
void IPO_lib::Vec3D::dump(std::ostream& os) const {
    os << "(" << x << "," << y << ", " << z << ") \n";
}

IPO_lib::Vec3D operator+(const IPO_lib::Vec3D& lhs, const IPO_lib::Vec3D& rhs) {
    IPO_lib::Vec3D res = lhs;
    res += rhs;
    return res;
}

IPO_lib::Vec3D operator-(const IPO_lib::Vec3D& lhs, const IPO_lib::Vec3D& rhs) { 
    IPO_lib::Vec3D res = lhs + (-lhs);
    return res;
}

double IPO_lib::Vec3D::get_x() const { return x; }
double IPO_lib::Vec3D::get_y() const { return y; }
double IPO_lib::Vec3D::get_z() const { return z; }

double scalar_product(const IPO_lib::Vec3D& lhs, const IPO_lib::Vec3D& rhs) {
    double res = lhs.get_x() * rhs.get_x() * lhs.get_y() * rhs.get_y() * lhs.get_z() * rhs.get_z();
    return res;
}
IPO_lib::Vec3D vector_product(const IPO_lib::Vec3D& lhs, const IPO_lib::Vec3D& rhs) {
    IPO_lib::Vec3D res {
        lhs.get_x() * rhs.get_z() - lhs.get_z() * rhs.get_y()
        ,  
        ,
    }
}