#include <stdio.h>
#include <string.h>
#include "./utils/getInt.c"

int main(void)
{

  printf("Enter a height: ");
  int count = getInt();

  for (int i = 1; i <= count; i++)
  {

    char str[sizeof(count)] = "";

    for (int j = count; j >= 1; j--)
    {
      if (i < j)
      {

        str[strlen(str)] = ' ';
      }
      else
      {
        str[strlen(str)] = '#';
      }
    }

    printf("%s\n", str);
  }
}