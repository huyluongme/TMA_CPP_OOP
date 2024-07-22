#include "circle.h"
#include <cmath>

Circle::Circle(double r) : Shape() { this->radius = r; }

Circle::~Circle() {}

double Circle::area(){
    return M_PI * this->radius * this->radius;
}