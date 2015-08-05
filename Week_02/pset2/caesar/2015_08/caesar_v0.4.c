#include <stdio.h>
#include <string.h>
#include <math.h>
#include <cs50.h>

int main(int argc, char* argv[])
{
  if (argc == 2)
  {
    char* k = argv[1];
    int key = atoi(k);
    if (key >= 0 && key <= 26)
    {
      printf("Key set to %i\n", key);
    }
    else if (key > 26)
    {
      printf ("Initial Key: %i\n", key);
      key = key % 26;
      printf ("Looped Key: %i\n", key);
    }
    printf("\n");
    printf("Input message to be encrypted:\n");
    char* s = GetString();
    printf("\n");
    printf("Plaintext: %s\n", s);
  }
  else
  {
    printf("ERROR\n");
    return 1;
  }
}
