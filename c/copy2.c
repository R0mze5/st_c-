#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
  printf("Say something: \n");

  char *s = "asdfasdf";

  // scanf("%[^\n]%*c", s);

  if (s == NULL)
  {
    return 1;
  }

  // printf("\n %lu \n", malloc((strlen(s) + 1) * sizeof(char)));

  // malloc - выделение памяти для переменной t
  // strlen(s) + 1  = ourString + \0 symbol
  // sizeof - сообщает сколько нужно памяти под каждый тип данных (не работает с массивами)
  char *t = malloc((strlen(s) + 1) * sizeof(char));
  if (t == NULL)
  {
    return 1;
  }

  for (int i = 0, n = strlen(s); i <= n; i++)
  {
    // метод разыменования вместо массива
    *(t + i) = *(s + i);
  }

  printf("Capitalizing copy... \n");

  if (strlen(s) > 0)
  {
    *t = toupper(*t);
  }

  printf("Original: %s \n", s);
  printf("Uppercase: %s \n", t);

  return 0;
}