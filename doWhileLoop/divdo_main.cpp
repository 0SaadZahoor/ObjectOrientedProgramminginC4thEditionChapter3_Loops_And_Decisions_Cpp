// divido_main.cpp created in 2024
// demonstrates DO loop

#include<iostream>

int main ()
{
    long divident;
    long divisor;
    char ch;
    do
    {
        printf("Enter divident: ");
        std::cin >> divident;
        printf("Enter divisor: ");
        std::cin >> divisor;
        printf("Remainder value: %d",divident%divisor);
        printf("\nQuotient value: %d",divident/divisor);
        printf("\nDo another? (y/n): ");
        std::cin >> ch;
    } 
    while (ch != 'n');
    
    return 0;
}