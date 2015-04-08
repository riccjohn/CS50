#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, char* argv[])
//int main(void)
{
  if (argc == 2)
  {
    // printf("Encryption Key: ");
    // int key = GetInt();
    string k = argv[1];
    // convert argv string to an int
    int key = atoi(k);
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
    else if (key <0)
    {
      return 1;
    }
    printf("\n");
    printf("Input message to be encrypted:\n");
    char* s = GetString();
    printf("\n");
    printf("Encrypted Message:\n");

    // Add key value to original plaintext char value
    // Still need to figure out how to get characters to not go past 'z' or 'Z'j
    // Maybe another 'if' resulting value is <z || <Z, - 26

    for (int i = 0, n = strlen(s); i < n; i++)
    {
      if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
      {
        printf("%c", s[i] + key);
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
    printf("Error: Please input non-negative integer as argument.\n");
    return 1;
  }
}
