#include <stdio.h>

// int main(void)
// {
//   // char* - то же самое, что и string
//   char *buffer;
//   printf("String please: ");
//   // без &, т.к. char* - это уже указатель
//   scanf("%s", buffer);
//   printf("Thanks for the %s \n", buffer);
// }

// int getStr(void)
// {
//   // выделить на буффер 16 символов
//   char buffer[16];
//   printf("String please: ");
//   // без &, т.к. char* - это уже указатель
//   scanf("%s", buffer);
//   printf("Thanks for the %s \n", buffer);
// }

char *getString(void)
{
  // growable buffer for chars
  char *buffer = NULL;

  // unsigned  - беззнаковая
  // capacity of buffer
  unsigned int capacity = 0;

  // number of chars actually in buffer
  unsigned int n = 0;

  // character read or EOF
  int c;

  // iteratively get char from standart input
  while ((c = fgetc(stdin)) != '\n' && c != EOF)
  {

    // grow buffer if necessary
    if (n + 1 > capacity)
    {
      // determine new capacity: start at 32 then double
      if (capacity == 0)
      {
        capacity = 32;
      }
      else if (capacity <= (__UINT8_MAX__ / 2))
      {
        // увеличиваем в 2 раза, чтобы при каждом символе не запрашивать у OS выделение памяти
        capacity *= 2;
      }
      else
      {
        free(buffer);
        return NULL;
      }
      // realloc - перераспределение блока памяти
      char *temp = realloc(buffer, capacity * sizeof(char));
      if (temp == NULL)
      {
        free(buffer);
        return NULL;
      }
      buffer = temp;
    }

    buffer[n++] = c;
  }

  if (n == 0 || c == EOF)
  {
    return NULL;
  }
}

int getInt()
{
  while (1 == 1)
  {
    char *line = getString();

    if (line == NULL)
    {
      return __INT_MAX__;
    }

    int n;
    char c;

    // sscanf - позволяет посмотреть на введенную пользователем строку и проанализировать ее - убедиться, что в строке целое число
    // %c - определить, не ввел ли пользователь после числа что-либо еще
    if (sscanf(line, " %i %c", &n, &c) == 1)
    {
      free(line);
      return n;
    }
    else
    {
      free(line);
      printf('Retry: ');
    }
  }
}