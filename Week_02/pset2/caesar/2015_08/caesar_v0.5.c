#include <stdio.h>
#include <math.h>
#include <string.h>
#include <cs50.h>

int loopkey(int a);

int main(int argc, char* argv[])
{
  if (argc == 2)
  {
    char* k = argv[1];
    int key = atoi(k);
    if (key >= 0 && key <= 26)
    {
      printf ("Key set to  %i\n", key);
    }
    else if (key > 26)
    {
      key = loopkey(key);
    }
    printf("\n");
    printf("Input message to be encrypted:\n");
    char* s = GetString();
    printf("\n");
    printf("Plaintext Message: %s\n", s);

    // ENCRYPTION PART
    printf("Encrypted Message: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
      // if character is a letter, add key to it
      if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
      {
        char enchar = s[i] + key;
        // if character is now a number or a symbol, loop back to letters
        if ((enchar > 'Z' && enchar < 'a') || (enchar > 'z'))
        {
          enchar = enchar % 26;
          printf("%c", enchar);
        }
        else
        printf("%c", enchar);
      }
      else
      {
        printf("%c", s[i]);
      }
    }
    printf("\n");
    printf("\n");
    return 0;
  }
  else
  {
    printf("ERROR\n");
    return 1;
  }
}

int loopkey(int n)
{
  printf ("Initial Key: %i\n", n);
  n = n % 26;
  printf ("Looped Key: %i\n", n);
  return 0;
}
