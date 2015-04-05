#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    printf("Encryption Key: ");
    int key = GetInt();
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
    string s = GetString();
    printf("\n");
    printf("Encrypted Message:\n");

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
