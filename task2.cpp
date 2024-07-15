#include <iostream>

int main() {
    char operation;
    double num1, num2;

    std::cout << "Calculator\n";
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch(operation) {
        case '+':
            std::cout << "Result: " << num1 + num2 << "\n";
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << "\n";
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << "\n";
            break;
        case '/':
            if (num2 != 0)
                std::cout << "Result: " << num1 / num2 << "\n";
            else
                std::cout << "Error: Division by zero\n";
            break;
        default:
            std::cout << "Invalid operation\n";
            break;
    }

    return 0;
}