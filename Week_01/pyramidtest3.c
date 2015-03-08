#include <stdio.h>
#include <cs50.h>
//begin code
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
		for (int i = 0; i < height; i++)
	    		{
	    		printf("#");
 			}
        	printf("\n");
    		}
	}
}
