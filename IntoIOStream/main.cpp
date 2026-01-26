#include <iostream>  // for std::cout and std::cin

//Get three numbers inputted by the user and output it back to them
int main()
{
    std::cout << "Enter 3 numbers, seperated with spaces:\n";
    
    int x{};
    int y{};
    int z{};
    std::cin >> x >> y >> z;

    std::cout << "Your numbers are: " << x << ", " << y << ", " << z;

    return 0;

    //Example
    //std::cout << "Enter a number: "; // ask user for a number
    //int x{}; // define variable x to hold user input
    //std::cin >> x; // get number from keyboard and store it in variable x
    //std::cout << "You entered " << x << '\n';

    //return 0;
}