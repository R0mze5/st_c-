#include <stdio.h>

// ./a.out someName
// ./a.out 'some Name' // to insert space into phrase

int main(int argc, char *argv[])
{

  if (argc == 2)
  {
    printf("hello, %s\n", argv[1]);
  }
  else
  {
    printf("hello, you");
  }
}
