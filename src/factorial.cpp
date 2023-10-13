#include "unit_tests_examples/factorial.hpp"


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
