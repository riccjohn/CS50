#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Declares function
float GetPositiveFloat();
float change;

// Actual program
int main(void)
{
  int coins = 0;
  GetPositiveFloat();
  // printf("Change Owed is: %.2f\n", change);

  while (change > 0.0000)
  {
    if (change >= .25)
    {
      change = change - .25;
      coins++;
    }
    else if (change >= .10 && change < .25)
    {
      change = change - .10;
      coins++;
    }
    else if (change >= .05 && change < .10)
    {
      change = change - .05;
      coins++;
    }
    else if (change >= .01 && change < .05)
    {
      change = change - .01;
      coins++;
    }
    else if (change > 0.00 && change < .01)
    {
      printf("ERROR\n");
      break;
    }

    printf("Coins: %i\n", coins);
    printf("Change left: %f\n", change);
  }
  printf("Your change will contain %d coins.\n", coins);
}

/**
 * Function that gets a positive float from user.
 */
float GetPositiveFloat()
{
  do
  {
    printf("How much change is owed?\n");
    printf("Change Owed: ");
    change = GetFloat();
  }
  while (change <= 0.0);
  return change;
}
