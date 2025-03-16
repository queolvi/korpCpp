#ifndef VEC2D_H
#define VEC2D_H
namespace Practice {
    class Vec2D {
        protected:
        double x, y;
        public:
        Vec2D(double x = 0.0, double y = 0.0);
        double scalar_product(Vec2D & tmp) const;
        virtual double length() const;

        virtual ~Vec2D() {};
    };
};
#endif