#include "factorial.hpp"

long factorial(int num) {
    if (num == 1) {
        return num;
    }
    return num * factorial(num - 1);
}