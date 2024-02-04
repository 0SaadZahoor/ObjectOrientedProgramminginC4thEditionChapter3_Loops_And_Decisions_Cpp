// while4_main.cpp created in 2024
// prints numbers raised to fourth power

#include <iostream>
#include <iomanip>

int main ()
{
    int formulaValue = 1;
    int userDefinedNumber = 1;
    while (formulaValue < 10000)
    {
        std::cout << std::setw(2) << userDefinedNumber;
        std:: cout << std::setw(5) << formulaValue << "\n";
        ++userDefinedNumber;
        formulaValue = userDefinedNumber * userDefinedNumber * userDefinedNumber * userDefinedNumber;
    }
    return 0;
}