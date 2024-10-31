#include <cmath>

#pragma once

double sqrt(int num) {
    if (num < 0) {
        return -1;
    }

    double guess = num / 2.0;
    double difference;

    do {
        double new_guess = 0.5 * (guess + num / guess);
        difference = std::fabs(new_guess - guess);
        guess = new_guess;
    } while (difference > 1e-6);

    return guess;
}