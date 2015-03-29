#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Declares function
float GetPositiveFloat();

// Actual program
int main(void)
{
  int coins = 0;

  // printf("Change Owed is: %.2f\n", change);
  float change = GetPositiveFloat();
  int cents = (int) (change*100);

  /** Uncomment for debugging
   *  printf("Change: %f\n", change);
   * printf("Cents: %i\n", cents);
   */

  while (cents > 0)
  {
    if (cents >= 25)
    {
      cents = cents - 25;
      coins++;
    }
    else if (cents >= 10 && cents < 25)
    {
      cents = cents - 10;
      coins++;
    }
    else if (cents >= 5 && cents < 10)
    {
      cents = cents - 5;
      coins++;
    }
    else if (cents >= 1 && cents < 5)
    {
      cents = cents - 1;
      coins++;
    }
    else if (cents > 0 && cents < 1)
    {
      printf("ERROR\n");
      break;
    }

    /** Uncomment for debugging
     *  printf("Coins: %i\n", coins);
     *  printf("Change left: %i cents\n", cents);
     */
  }
  printf("Your change will contain %d coins.\n", coins);
}

/**
 * Function that gets a positive float from user.
 */
float GetPositiveFloat()
{
  float change;

  do
  {
    printf("How much change is owed?\n");
    printf("Change Owed: ");
    change = GetFloat();
  }
  while (change <= 0.0);
  return change;
}
