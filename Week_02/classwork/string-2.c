#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
  printf("What is your name?\n");
  string s = GetString();
  printf("\n");
  if (s != NULL)
  {
    for (int i = 0, n = strlen(s); i < n; i++)
    {
      printf("%c\n", s[i]);
    }
    printf("\n");
  }
}
