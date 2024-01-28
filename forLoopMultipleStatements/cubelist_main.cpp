// fordemocubes_main.cpp created in 2024
// lists cubes from 1 to 10

#include <iostream>

int main()
{
    for (int forLoopVariable = 1; forLoopVariable <= 10; forLoopVariable++)
    {
        int cubeValue = forLoopVariable*forLoopVariable*forLoopVariable;
        printf("The Cube Value of %d is %d\n",forLoopVariable,cubeValue);
    }
    return 0;
}