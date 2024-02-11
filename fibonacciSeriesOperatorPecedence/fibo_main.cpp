// fibo_main.cpp created in 2024
// demonstrates WHILE loops using fibonacci series

#include<iostream>

int main()
{
    const unsigned long maxLimitOfStoredVariable = 4294967295;
    unsigned long nextNumber = 0;
    unsigned long lastNumber = 1;
    while (nextNumber < maxLimitOfStoredVariable/2)
    {
        std::cout << lastNumber << "\n";
        long sumOfTwoConsectiveNumbers = lastNumber + nextNumber;
        nextNumber = lastNumber;
        lastNumber = sumOfTwoConsectiveNumbers;
    }
    std::cout << "\n";
    return 0;
}