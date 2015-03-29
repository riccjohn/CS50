#include <stdio.h>
#include <cs50.h>

int main(void)
{
	/*
	Get pyramid height between 1 and 23
	*/
	int height;
	do
	{
        printf("Please give me a height from 1 to 23: ");
        height = GetInt();
	}
	while (height < 1 || height > 23);
	/*
	Build pyramid
	*/ 
	{
	    for (int i = 0; i < height; i++)
	    {   
	        for (int j = 0; j < ((height + 1) - (i + 2)); j++)
		    {
		        printf(" ");
		    }
		    for (int k = 0; k < i + 2; k++)
		    {
		        printf("#");
		    }
		    printf("\n");
        }
	}
}
