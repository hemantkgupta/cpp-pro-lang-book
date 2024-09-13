// calculator.cpp
#include "Calculator.h"
#include<iostream>
using namespace std;

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

double Calculator::divide(int a, int b) {
    if (b != 0) {
        return static_cast<double>(a) / b;
    } else {
        throw "Division by zero!";
    }
}

int main() {
    Calculator calc;
    cout << calc.add(3, 4) << endl;

    return 0;
}