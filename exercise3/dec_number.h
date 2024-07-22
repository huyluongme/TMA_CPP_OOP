#ifndef DEC_NUMBER_H
#define DEC_NUMBER_H

#include "number.h"

class DecNumber : public Number {
public:
    DecNumber(int number);
    ~DecNumber();

    void print_it() override;
};

#endif