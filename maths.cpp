//
// Created by Nikki Li on 2/15/21.
//

#include "maths.h"
float add(float left, float right) {
    float result = left + right;
    return result;
}

float subtract(float left, float right) {
    float result = left - right;
    return result;
}

float multiply(float left, float right) {
    float result = left * right;
    return result;
}

float divide(float left, float right) {
    float result = left / right;
    return result;
}

float power(float left, float right) {
    float result = 1;
    for (int counter = 0; counter < right; counter++) {
        result = result * left;
    }
    return result;
}

float recursivePower(float left, float right) {
    if (right != 0)
        return (left * recursivePower(left, right - 1));
    else
        return 1;
}