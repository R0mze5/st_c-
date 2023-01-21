#include <ctype.h>

int getInt(void)
{

  int ch;
  int num = 0;

  while ((ch = getchar()) != '\n')
  {

    // ascii of entered number - ascii of  '0'
    int c = (ch - '0');

    num = (num * 10) + c;
  }

  return num;
}

/* atoi: преобразование s в целое */
// int atoi(char s[])
// {
//   int i, n;
//   n = 0;
//   for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
//     n = 10 * n + (s[i] - '0');
//   return n;
// }

/* atoi: преобразование s в целое число; версия 2 */
int atoi(char s[])
{
  int i, n, sign;
  /* игнорировать символы-разделители */
  for (i = 0; isspace(s[i]); i++)
    ;
  sign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-') /* пропуск знака */
    i++;
  for (n = 0; isdigit(s[i]); i++)
    n = 10 * n + (s[i] - '0');
  return sign * n;
}