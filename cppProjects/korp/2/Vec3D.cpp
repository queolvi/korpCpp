#include "Vec2D.h"
#include "Vec3D.h"
#include "Utils.h"

Practice::Vec3D::Vec3D(double x = 0.0, double y = 0.0, double z = 0.0) : Vec2D(x,y), z(z) {};

Practice::Vec3D Practice::Vec3D::vector_product(const Practice::Vec3D &tmp) {
   Vec3D res { 
    x = y * tmp.z - z * tmp.y,
    y = z * tmp.x - tmp.z * x, 
    z = x * tmp.y - y * tmp.x 
   };
   return res;
}
double Practice::Vec3D::length() const {
    double res = double (mySqrt(Practice::Vec2D::length() * Practice::Vec2D::length() + z * z));
    return res;
}
double Practice::Vec3D::scalar_product(const Practice::Vec3D &tmp) const {
    Vec2D exmpl{x,y};
    double sc_prod_vec2D = Vec2D::scalar_product(exmpl);
    double res = sc_prod_vec2D + tmp.z * z;
    return res;
}