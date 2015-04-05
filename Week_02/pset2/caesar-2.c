#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc == 2)
  {
    printf("Key set to %s\n", argv[1]);
    printf("Input message to be encrypted\n");
    string s = GetString();

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i] + (int) argv[1]);
    }
    printf("\n");
    return 0;
  }
  else
  {
    printf("Please input non-negative integer as argument.\n");
    return 1;
  }
}
