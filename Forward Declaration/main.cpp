#include "doMath.h"
#include "userInput.h"
#include <iostream>

int main()
{
    float num1{};
    float num2{};
    float num3{};
    float num4{};

    std::cout << "Input four numbers seperated by a space\n";
    std::cin >> num1 >> num2 >> num3 >> num4;

    float result = doMath(num1, num2, num3, num4);

    std::cout << num1 << " + " << num2 << " * " << num3 << " / " << num4 << " = " << result;
    return 0;
}