#ifndef VEC3D_H
#define VEC3D_H
#include "Vec2D.h"
namespace Practice {
    class Vec3D final : public Vec2D {
        private: 
        double z;
        public:
        
        Vec3D(double x = 0.0, double y = 0.0, double z = 0.0);
        double get_z() const;
        Vec3D vector_product(Vec3D& tmp);
        double scalar_product(const Vec3D& other) const;
    };
};

#endif