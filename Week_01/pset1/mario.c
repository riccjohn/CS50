#include <cs50.h>
#include <stdio.h>

// Program will build pyramid based on user input for height

int main(void)
{
    int height;
    do
    {
        printf("Please give me a height from 1 to 23: ");
        height = GetInt();
    }
    while (height < 1 || height > 23);
    printf("PYRAMID HERE\n");
}
    
