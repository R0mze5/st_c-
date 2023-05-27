#include <stdio.h>

int main(void)
{
  int x;
  printf("Number please: ");
  // & - противоположность *
  // * иди по адресу
  // & выясни адрес переменной
  // если без & - то scanf будет работать с локальное копией
  scanf("%i", &x);
  printf("Thanks for the %i \n", x);
}