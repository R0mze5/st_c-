#include <stdio.h>

void swap(int *a, int *b);
void swapXOR(int a, int b);

int main(void)
{
  int x = 1;
  int y = 2;

  printf("x = %i , y = %i \n", x, y);
  // &x - адрес x
  swap(&x, &y);

  printf("x = %i , y = %i \n", x, y);
}

void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void swapXOR(int a, int b)
{
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  printf("a = %i , b = %i \n", a, b);
}