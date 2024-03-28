// prime_main.cpp created on 2024
// demonstrates IF statement with prime numbers

#include <iostream>
#include <process.h>        //for exit()

int main()
{
    unsigned long userDefinedNumber;
    unsigned long iterator;
    std::cout << "Enter a number: "; 
    std::cin >> userDefinedNumber;
    for (iterator = 2; iterator <= userDefinedNumber/2; iterator++)      //divide by every integer
    {
        if (userDefinedNumber%iterator == 0)               //if remainder is 0, the value is divisible and the satement will execute
        {
            std::cout << "It's not prime; divisible by " << iterator << std::endl;
            exit(0);                //exit from the program
        }
    }
    std::cout << "It's prime\n";
    return 0;
}