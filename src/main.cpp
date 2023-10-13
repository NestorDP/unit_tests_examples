// Copyright 2023 - Nestor Neto

#include <locale.h>

#include <iostream>

#include "unit_tests_examples/square_root.hpp"

int main() {
    SquareRoot root;

    setlocale(LC_ALL, "portuguese");

    std::cout << "A raiz quadrada é: " << root.getSquareRoot(36) << std::endl;
}
