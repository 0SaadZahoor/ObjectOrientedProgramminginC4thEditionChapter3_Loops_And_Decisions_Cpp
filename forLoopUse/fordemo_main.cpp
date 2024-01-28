// fordemo_main.cpp created in 2024
// demonstrates simple FOR loop

#include <iostream>

int main()
{
    for (int forVariable = 0 ; forVariable < 15 ; forVariable++)
    {
        std::cout << forVariable << "  ";
        std::cout << (forVariable*forVariable)<< std::endl;
    }
    std::cout << "\n";
    return 0;
}