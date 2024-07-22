#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H

#include "shape.h"

class EquilateralTriangle : public Shape {
private:
    double side;

public:
    EquilateralTriangle(double s);
    ~EquilateralTriangle();
    double area() override;
};

#endif