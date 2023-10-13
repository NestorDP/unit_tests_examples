// Copyright 2023 - Nestor Neto

#include <cmath>

#include "unit_tests_examples/square_root.hpp"

SquareRoot::SquareRoot() {}

SquareRoot::~SquareRoot() {}

double SquareRoot::getSquareRoot(double num) {
    double b = sqrt(num);
    if (b != b) {  // nan check
        return -1.0;
    } else {
        return sqrt(num);
    }
}
