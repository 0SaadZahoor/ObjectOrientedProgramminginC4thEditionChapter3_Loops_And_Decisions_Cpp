// factor_main.cpp created in 2024
// calculates factorials, demonstrates FOR loop

#include <iostream>

int main ()
{
    unsigned int userDefinedFactorialNumber;
    unsigned long factorialValue = 1;
    printf ("Enter a number: \n");
    std::cin >> userDefinedFactorialNumber;
    for (int forLoopIteration = userDefinedFactorialNumber; forLoopIteration > 0; forLoopIteration--)
    {
        factorialValue *= forLoopIteration;
    }
    printf("Factorial of %d is %d \n",userDefinedFactorialNumber, factorialValue); 
    return 0;
}
// The largest correct value that can be entered here is 12, putting 13 or 
// larger number will produce an error because the capacity of type long in "factorialValue" will exceed.