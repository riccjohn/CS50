#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Declares function
float GetPositiveFloat();

// Actual program
int main(void)
{
  float change = GetPositiveFloat();
  int coins = 0;
  printf("Thanks for the %f\n", change);

  while (change > 0)
  {
    if (change >= .25 && < 1.00)
    {
      change = change - .25;
      coins++;
    }
    else if (change >= .10 && < .25)
    {
      change = change - .10;
      coins++;
    }
    else if (change >= .05 && < .10)
    {
      change = change - .05;
      coins++;
    }
    else if (change >= .01 && < .05)
    {
      change = change - .01;
      coins++;
    }
  }
}

/**
 * Function that gets a positive float from user.
 */
float GetPositiveFloat(void)
{
  float change;
  do
  {
    printf("What is the change amount? ");
    change = GetFloat();
  }
  while (change <= 0.0);
}
