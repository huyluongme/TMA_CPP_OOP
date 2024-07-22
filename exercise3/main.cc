#include "hex_number.h"
#include "octal_number.h"
#include "dec_number.h"

int main(){
    int number;
    std::cout << "Enter value: ";
    std::cin >> number;

    HexNumber hex(number);
    OctalNumber octal(number);
    DecNumber dec(number);

    hex.print_it();
    octal.print_it();
    dec.print_it();
    return 0;
}