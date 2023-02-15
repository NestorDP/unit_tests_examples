#include "square_root/square_root.hpp"
#include <cmath>

SquareRoot::SquareRoot () {}

SquareRoot::~SquareRoot () {}

double SquareRoot::getSquareRoot(double num){
    double b = sqrt(num);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(num);
    }
}
