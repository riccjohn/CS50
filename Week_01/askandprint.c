#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Please give me a postitive int: ");
        n = GetInt();
    }
    while (n < 1);
    printf("Thanks for the positive int!\n");
       
    for (int i = 0; i < n; i++)
	{
		printf("#");
		printf("\n");
	}
}
