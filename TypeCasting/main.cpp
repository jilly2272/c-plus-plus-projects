#include <iostream>
// Question #1 Write a short program where the user is asked to enter a single character. Print the value of the character
// and its ASCII code, using static_cast.

//int main()
//{
//    std::cout << "Enter a single character:\n";
//
//    char sc {};
//    std::cin >> sc;
//
//    std::cout << "You entered '" << sc << "', which has a ASCII code of " << static_cast<int>(sc);
//    return 0;
//}

// Question #2
// Modify the program you wrote for quiz #1 to use implicit type conversion instead of static_cast.

int castChar(int c) {
    return c;
}

int main()
{
    std::cout << "Enter a single character:\n";

    char sc {};
    std::cin >> sc;

    std::cout << "You entered '" << sc << "', which has a ASCII code of " << castChar(sc);
    return 0;
}