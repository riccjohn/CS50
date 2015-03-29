#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    // Asks for input and confirms that input is positive
    do
    {
        printf("How much change is owed? : ");
        change = GetFloat();
    }
    while (change <= 0.0);
    // Prototype Test
    // printf("Input Correct.\n");
    // printf("%.2f \n", change);

}
