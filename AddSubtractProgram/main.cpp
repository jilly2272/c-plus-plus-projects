#include <iostream>

int main()
{
    std::cout << "Enter an integer:\n";
    int num1{};
    std::cin >> num1;

    std::cout << "Enter another integer:\n";
    int num2{};
    std::cin >> num2;

    std::cout << num1 << " + " << num2 << " is " << num1 + num2 << ".\n";
    std::cout << num1 << " - " << num2 << " is " << num1 - num2 << ".\n";
    return 0;
}