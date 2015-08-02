#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, char* argv[])
{
  if (argc == 2)
  {
  char* k = argv[1];
  int key = atoi(k);
  printf ("Input key is: %i\n", key);

  // Loop key if needed
  if (key > 26 || key < 0)
  {
    int key = (key % 26);
    printf ("Looped key: %i\n", key);
  }
  // MESSAGE HANDLING
  // printf ("Input message: \n");
  // char* ptxt = GetString();
  // printf ("PLAINTEXT: %s", ptxt);
  }
}
