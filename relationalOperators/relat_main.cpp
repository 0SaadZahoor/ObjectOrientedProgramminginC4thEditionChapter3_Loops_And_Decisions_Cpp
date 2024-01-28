// relat_main.cpp created in 2024
// demonstrates relational operators

#include<iostream>

int main()
{
    int enterNumberFromUser;
    std::cout << "Enter a number ";
    std::cin >> enterNumberFromUser;
    std::cout << "the number entered by user < 10 " << (enterNumberFromUser < 10) << "\n";
    std::cout << "the number entered by user > 10 " << (enterNumberFromUser > 10) << "\n";
    std::cout << "the number entered by user == 10 " << (enterNumberFromUser == 10) << "\n";
    return 0;
}