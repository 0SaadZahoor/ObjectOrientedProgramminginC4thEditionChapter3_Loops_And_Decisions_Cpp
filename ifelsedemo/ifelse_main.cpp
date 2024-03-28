// ifelse_main.cpp created on 2024
// demonstrates IF..ELSE statement

#include <iostream>

int main()
{
    int userDefinedNumber;
    std::cout << "Enter a number: "; 
    std::cin >> userDefinedNumber;
    if (userDefinedNumber > 100)
        std::cout << "the entered number is greater than 100\n";
    else
        std::cout << "the entered number isn't greater than 100\n";
    return 0;
}