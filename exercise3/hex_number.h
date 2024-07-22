#ifndef HEX_NUMBER_H
#define HEX_NUMBER_H

#include "number.h"

class HexNumber : public Number {
public:
    HexNumber(int number);
    ~HexNumber();

    void print_it() override;
};

#endif