#include "square.h"

Square::Square(double s) : Shape() { this->side = s; }

Square::~Square() {}

double Square::area() {
    return this->side * this->side;
}