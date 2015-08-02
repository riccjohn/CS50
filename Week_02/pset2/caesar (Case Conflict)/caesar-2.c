#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, char* argv[])
{
  if (argc == 2)
  {
    // Declare that string k is the first argument
    char* k = argv[1];
    // Convert argv to an int
    int key = atoi(k);
    // If key in correct range, print.
    if (key >= 0 && key <= 26)
    {
      printf("Key set to %i\n", key);
    }
    // If key is negative, give error;
    else if (key < 0)
    {
      printf("ERROR: Key must be a positive int\n");
      return 1;
    }
    // If key > 26, subtract 26 until it's between 0 and 26
    else if (key > 26)
    {
      printf("Initial Key: %i\n", key);
      do
      {
        key = key - 26;
      }
      while (key > 26);
      printf("Looped Key: %i\n", key);
    }
    printf("\n");
    // Ask for message to be encrypted
    printf("Input message to be encrypted:\n");
    char* s = GetString();
    printf("\n");
    printf("Encrypted Message: ");
    /* Encrypt message
    ** Add key value to original plaintext char value
    */
    for (int i = 0, n = strlen(s); i < n; i++)
    {
      if (s[i] >= 'A' && s[i] <= 'Z')
      {
        char enchar = s[i] + key;
        if (enchar > 'Z')
        {
          enchar = enchar - 26;
        }
        printf("%c", enchar);
      }
      else if (s[i] >= 'a' && s[i] <= 'z')
      {
        char enchar = s[i] + key;
        if (enchar > 'z')
        {
          enchar = enchar - 26;
        }
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
    printf("ERROR: Must input positive integer as argument.\n");
    return 1;
  }
}
