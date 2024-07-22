#include "equilateral_triangle.h"
#include <cmath>

EquilateralTriangle::EquilateralTriangle(double s) : Shape() { this->side = s; }

EquilateralTriangle::~EquilateralTriangle() {}

double EquilateralTriangle::area(){
    return (sqrt(3)/4) * this->side * this->side;
}