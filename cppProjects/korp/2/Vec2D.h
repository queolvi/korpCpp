#include<iostream>
namespace Figure {
class Vec2D{
    private:
    int x, y;
    public:
    Vec2D(int x = 0, int y = 0);
    
    Vec2D operator+=(const Vec2D& rhs);
    Vec2D operator-=(const Vec2D& rhs);
    Vec2D operator-() const;
    

    bool operator==(const Vec2D& rhs) const;
    bool operator!=(const Vec2D& rhs) const;
    double norm() const;
    double projection(const Vec2D& base) const;
    Vec2D koeff_product(double k) const;             
    bool is_zero() const;
    bool is_unit() const;
    void dump(std::ostream& os) const;  
    double get_x() const;
    double get_y() const;
    
    virtual ~Vec2D () {};
    
};
class Vec3D : public Vec2D{
    private:
    int z;
    public:
    Vec3D(int x = 0, int y = 0, int z = 0) : Figure::Vec2D::x(x), y(y), z(z) {};
    double get_z() const;
    Vec3D Vector_product(Vec3D& rhs, Vec3D& lhs);

};
double scalar_product(Vec2D& rhs, Vec2D& lhs);
double length_vec();
};