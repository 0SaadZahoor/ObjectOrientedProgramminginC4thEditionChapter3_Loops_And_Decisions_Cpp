// chcnt2_main.cpp created on 2025
// counts the characters and words typed in but accurately differentiate among characters & words

#include <iostream>
#include <conio.h>      //for getche()

int main()
{
    int charCount = 0;
    int wordCount = 1;      //space between 2 words
    char ch;

    while ((ch=getche()) != '\r')      //loop until Enter typed
        {
            if (ch == ' ')      //if it’s a space
            {
                wordCount++;    //count a word
            }
            else                //otherwise
            {
                charCount++;    //count a character
            }
        }
    std::cout << "\n Words=" << wordCount << std::endl
    << "Letters=" <<(charCount) << std::endl;
    return 0;
}
