#include "dec_number.h"

DecNumber::DecNumber(int number) : Number(number) {}

DecNumber::~DecNumber() {}

void DecNumber::print_it() {
    std::cout << "Decimal: " << std::dec << this->value << std::endl;
    std::cout << std::dec;
}