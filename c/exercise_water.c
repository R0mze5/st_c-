#include <stdio.h>
#include "./utils/getInt.c"

int main(void)
{

  printf("Enter a value :");
  int num = getInt();

  int bottles = num * 12;

  printf("bottles: %i\n", bottles);
}