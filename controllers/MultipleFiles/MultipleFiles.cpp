#include <iostream>

#include "factorial.hpp"
#include "sqrt.hpp"

int main(int argc, char **argv) {
    int input{4};
    std::cout << "Factorial of " << input << " is " << factorial(input) << std::endl;
    std::cout << "Square root of " << input << " is " << sqrt(input) << std::endl;
    return 0;
}