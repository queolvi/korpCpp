#include "Vec2D.h"
#include <cmath>
    Figure::Vec2D::Vec2D(int x = 0, int y = 0) : x(x), y(y){}; 
    double scalar_product(Figure::Vec2D& rhs, Figure::Vec2D& lhs) {
        double res = lhs.get_x() * rhs.get_x() * lhs.get_y() * rhs.get_y();
        return res;   
    }
    Figure::Vec3D vector_product(const Figure::Vec3D& lhs, const Figure::Vec3D& rhs) {
        Figure::Vec3D res {
            lhs.get_x()* rhs.get_z() - lhs.get_z() * rhs.get_y()
            , lhs.get_z() * rhs.get_x() - lhs.get_x() * rhs.get_z()
            , lhs.get_x() * rhs.get_y() - lhs.get_y() * rhs.get_x()

        };
        return res;
    }
    Figure::Vec2D Figure::Vec2D::operator+=(const Figure::Vec2D &rhs){
        x += rhs.x;
        y += rhs.y;
        return *this;
    }

    Figure::Vec2D Figure::Vec2D::operator-=(const Vec2D& rhs){
        *this += -rhs;
        return *this;
    }
    Figure::Vec2D Figure::Vec2D::operator-() const{
        Figure::Vec2D tmp(-x,-y);
        return tmp;
    }
    
    
    void Figure::Vec2D::dump(std::ostream& os) const{


    };  
    double Figure::Vec2D::get_x() const {
        return x;
    }
    double Figure::Vec2D::get_y() const{
        return y;
    };
    double Figure::Vec3D::get_z() const{
        return z;
    };
    