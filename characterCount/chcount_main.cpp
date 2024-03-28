// chcount_main.cpp created on 2024
// counts characters and words typed in

#include <iostream>
#include <conio.h>      //for getche

int main()
{
    int charCount = 0;      //counts non-space characters
    int wordCount = 1;      //counts spaces between words
    char ch = 'a';          //ensure it isn’t ‘\r’
    std::cout << "Enter a phrase: ";
    while (ch != '\r')      //loop until Enter typed
        {
            ch = getche();      //read one character
            if (ch == ' ')      //if it’s a space
            {
                wordCount++;    //count a word
            }
            else
            {
                charCount++;    //count a character
            }
        }
    std::cout << "\n Words=" << wordCount << std::endl
    << "Letters=" <<(charCount-1) << std::endl;
    return 0;
}