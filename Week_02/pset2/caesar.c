#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, char* argv[])
{
  if (argc == 2)
  {
    string k = argv[1];
    int key;
    key = atoi(k);
    if (key >= 0 && key <= 26)
    {
      printf("Key set to %i\n", key);
    }
    else if (key > 26)
    {
      printf("Initial key set to %i\n", key);
      do
      {
        key = key - 26;
      }
      while (key > 26);
      printf("Looped Key: %i", key);
    }
    else if (key < 0)
    {
      printf("Key must be a positive integer.\n");
      return 1;
    }
    printf("\n");
    printf("Input message to be encrypted:\n");
    char* s = GetString();
    printf("\n");
    printf("Encrypted Message:\n");

    // Add key value to original plaintext char value
    for (int i = 0, n = strlen(s); i < n; i++)
    {
      // if character is a letter, add key to it
      if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
          char enchar = s[i] + key;
          // if character + key is now a number or symbol, loop back to letters
          if ((enchar > 'Z' && enchar < 'a') || (enchar > 'z'))
          {
            do
            {
              enchar = enchar - 26;
            }
            while ((enchar > 'Z' && enchar < 'a') || (enchar > 'z'));
            printf("%c", enchar);
          }
          else
          printf("%c", enchar);
        }
      // if character is not a-z or A-Z (a space or non alphabetic character), just print it
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
    printf("Error: Please input non-negative integer as argument.\n");
    return 1;
  }
}
