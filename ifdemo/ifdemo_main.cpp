// ifdemo_main.cpp created on 2024
// demonstrates IF statement

#include <iostream>

int main()
{
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    if (x > 100)
    {
        std::cout << "The number entered is greater than 100\n";
    }
    return 0;
}
