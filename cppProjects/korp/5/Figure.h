#ifndef FIGURE_H 
#define FIGURE_H
#include <cmath>
namespace Practice {
    const double PI = M_PI;
    class Circle {
        protected: 
        double r;
        public:
        Circle (double r = 0.0);
        double length(Circle &c) const;
        double S(Circle &c) const;
        virtual ~Circle() {};
    };
    class Ellipse : public Circle {
    private: 
    double r_;
    public:
    Ellipse(double r = 0.0, double r_ = 0.0);
    double length(Ellipse& e) const;
    double S(Ellipse &e) const;
    };
    
    bool is_intersection(const Circle& c, const Ellipse& e);
};
#endif
//