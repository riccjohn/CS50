#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
  // Prompt user for their name
  printf("What is your full name? ");
  string n = GetString();

  // iterate through array to check if chracters are uppercase
  if (n != NULL)
  {

    for (int i = 0, l = strlen(n); i < l; i++)
    {
      if (n[i] >= 'A' && n[i] <= 'Z')
      printf("%c", n[i]);
    }
    printf("\n");
    return 0;
  }
}
