// Question #4: Write the function declaration for this function (use the preferred form with names)

#include <iostream>

float doMath(float first, float second, float third, float fourth);
float getUserInput();

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