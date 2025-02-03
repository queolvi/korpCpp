#ifndef UNTILTED_TRIANGLE_H
#define UNTILTED_TRIANGLE_H
class Triangle {
    private:
    double a, b, c;

    public: 
    Triangle() = delete;
    
    bool is_triangle(const Triangle& t);
    double tr_perimeter(const Triangle& t);
    double tr_semiperimeter(const Triangle& t);
    double herons_formula(const Triangle& t);
};

// сущность треугольника - 3 точки 
// периметр треугольника рассчитать
// площадь треугольника
// конструктор по умолчанию - запретить
// остальные конструкторы - надо ли ? 
#endif