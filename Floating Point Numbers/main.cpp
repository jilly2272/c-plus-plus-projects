#include <iostream>

// Write the following program: The user is asked to enter 2 floating point numbers (use doubles).
// The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
// The program computes the answer on the two numbers the user entered and prints the results.
// If the user enters an invalid symbol, the program should print nothing.

double doMath(double num1, double num2, char c) {
    switch (c) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        default:
            std::cout << "An error occured.";
            break;
    }
}

int main()
{
    std::cout << "Input two floating point numbers seperated by a space:\n";
    double f1{};
    double f2{};
    std::cin >> f1 >> f2;

    std::cout << "Input a mathematical symbol (+, -, *, or /):\n";
    char symbol{};
    std::cin >> symbol;

    if (f1 && f2 && symbol)
        std::cout << f1 << " " << symbol << " " << f2 << " = " << doMath(f1, f2, symbol);
    else
        std::cout << "An invalid value was inputted.";

    return 0;
}