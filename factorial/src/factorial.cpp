
#include "factorial/factorial.hpp"

Factorial::Factorial () {}

Factorial::~Factorial () {}

int Factorial::getFactorial(int num){
    if (num > 0) {
        return num * getFactorial (num -1);
    }
    else if (num == 0){
        return 1;
    }
    else {
        return -1;
    }
}
