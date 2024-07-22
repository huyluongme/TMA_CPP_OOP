#ifndef OCTAL_NUMBER_H
#define OCTAL_NUMBER_H

#include "number.h"

class OctalNumber : public Number {
public:
    OctalNumber(int number);
    ~OctalNumber();

    void print_it() override;
};

#endif