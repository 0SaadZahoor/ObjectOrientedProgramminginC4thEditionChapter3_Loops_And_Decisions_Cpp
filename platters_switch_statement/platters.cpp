// platters.cpp created on 2025
// demonstrates SWITCH statement with an integer number

#include <iostream>

int main()
{
    int turntableSpeed;
    std::cout << "\nEnter 33, 45, or 78: ";
    std::cin >> turntableSpeed;
    switch (turntableSpeed)
    {
    case 33:
        std::cout << "LP Album\n";
        break;
    case 45:
        std::cout << "Single selection\n";
        break;
    case 78:
        std::cout << "Obselete format\n";
        break;
    }
    return 0;
}