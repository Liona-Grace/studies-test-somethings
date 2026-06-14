#include <iostream>

#include "utils/math_calculation.hpp"

int main() {
    int total = math_plus(10, 20);
    int minus = math_minus(10, 20);
    int multiply = math_multiply(10, 20);

    std::cout << "Total: " << total << std::endl;
    std::cout << "Minus: " << minus << std::endl;
    std::cout << "Multiply: " << multiply << std::endl;

    return 0;
}
