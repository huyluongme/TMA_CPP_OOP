#include "octal_number.h"

OctalNumber::OctalNumber(int number) : Number(number) {}

OctalNumber::~OctalNumber() {}

void OctalNumber::print_it() {
    std::cout << "Octal: 0o" << std::oct << this->value << std::endl;
    std::cout << std::dec;
}