#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, char* argv[])
{
  if (argc == 2)
  {
    int key = atoi(argv[1]);
    printf("Input encrypted message: \n");
    char* encmsg = GetString();
    printf("Encrypted message is:\n")
    prinf("%s", encmsg);
    


  }
  else
  {
    printf("ERROR: Must input positive integer as argument.\n")
    return 1;
  }
}
