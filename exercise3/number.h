#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
#include <iomanip>

class Number
{
protected:
    int value;
public:
    Number(int number);
    ~Number();
    
    virtual void print_it() = 0;
};

#endif