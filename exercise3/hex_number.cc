#include "hex_number.h"

HexNumber::HexNumber(int number) : Number(number) {}

HexNumber::~HexNumber() {}

void HexNumber::print_it() {
    std::cout << "Hexa: 0x" << std::hex << this->value << std::endl;
    std::cout << std::dec;
}