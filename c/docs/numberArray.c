#include <stdio.h>
#include "../utils/getInt.c"

int main(void)
{
  int count;

  do
  {
    printf("Enter count of room");
    count = getInt();
  } while (count < 1);

  int numbers[count]; // для каждого элемента будет размер 4 байта. для char был бы 1 байт

  for (int i = 0; i < count; i++)
  {
    numbers[i] = getInt();
  }
}