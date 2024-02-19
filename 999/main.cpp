// main.cpp
#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;

    int a, b;
    char op;

    std::cout << "Enter first number, operator, second number: ";
    std::cin >> a >> op >> b;

    int result;
    switch (op) {
        case '+':
            result = calc.add(a, b);
            break;
        case '-':
            result = calc.subtract(a, b);
            break;
        case '*':
            result = calc.multiply(a, b);
            break;
        case '/':
            result = calc.divide(a, b);
            break;
        default:
            std::cout << "Invalid operator!";
            return 1;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}


