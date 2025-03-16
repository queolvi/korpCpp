#include "Vec2D.h"
#include "Vec3D.h"

Practice::Vec3D::Vec3D(double x = 0.0, double y = 0.0, double z = 0.0) : Vec2D(x,y), z(z) {};

Practice::Vec3D Practice::Vec3D::vector_product(Practice::Vec3D &tmp) {
    get_y() * tmp.get_z() - get_z() * tmp.get_y()
    , get_z() * tmp.get_x() - tmp.get_z() * get_x()
    , get_x() 
}