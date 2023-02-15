#include "factorial/factorial.hpp"
#include <iostream>
#include <locale.h>

int main () {
    Factorial fac;

    setlocale(LC_ALL, "portuguese");

    std::cout << "factoria de 3 é: " << fac.getFactorial(3) << std::endl;
}