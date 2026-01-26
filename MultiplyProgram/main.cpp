#include <iostream>

//bad example
//int main()
//{
//    std::cout << "Enter an integer" << "\n";
//    int num{};
//    std::cin >> num;
//
//    num = num * 2;
//
//    std::cout << "Double the number is " << num << "\n";
//    return 0;
//}

//mid example
//int main()
//{
//    std::cout << "Enter an integer" << "\n";
//    int num{};
//    std::cin >> num;
//
//    int doubleNum{ num * 2 };
//
//    std::cout << "Double the number is " << doubleNum << "\n";
//    return 0;
//}

//best example
int main()
{
    std::cout << "Enter an integer" << "\n";
    int num{};
    std::cin >> num;

    std::cout << "Double " << num << " is " << num * 2 << "\n";
    std::cout << "Triple" << num << " is " << num * 3 << "\n";
    return 0;
}