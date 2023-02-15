#include "square_root/square_root.hpp"
#include <iostream>
#include <locale.h>

int main () {
    SquareRoot root;

    setlocale(LC_ALL, "portuguese");

    std::cout << "A raiz quadrada é: " << root.getSquareRoot(36) << std::endl;
}