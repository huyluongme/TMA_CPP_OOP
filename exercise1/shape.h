#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    Shape();
    ~Shape();
    virtual double area() = 0;
};

#endif