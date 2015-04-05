#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    printf("Encryption Key: ");
    int key = GetInt();
    printf("Initial Key set to %i\n", key);

    if (key > 26)
    {
      key = key - 26;
      printf("Looped Key: %i", key);
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
