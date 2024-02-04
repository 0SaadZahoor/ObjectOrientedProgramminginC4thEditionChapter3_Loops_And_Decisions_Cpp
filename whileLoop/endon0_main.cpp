// endon0_main.cpp created in 2024
// demonstrates WHILE loop

#include <iostream>

int main ()
{
    int numberForWhileLoop = 99;
    while (numberForWhileLoop != 0)
    {
        printf("Re-enter the number as %d is non zero\n", numberForWhileLoop);
        std::cin >> numberForWhileLoop;
    }
    printf("\nEntered number is %d and program ends", numberForWhileLoop);
    return 0;
}