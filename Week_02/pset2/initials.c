#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main()
{
  // Prompt user for their name
  string n = GetString();

  // iterate through array to check if chracters are uppercase
  if (n != NULL)
  {
    printf("%c",toupper(n[0]));

    for (int i = 0, l = strlen(n); i < l; i++)
    {
      if (n[i] == (char) 32)
      printf("%c", toupper(n[i+1]));
    }
    printf("\n");
    return 0;
  }
}
