#include <stdio.h>
#include <ctype.h>

int toUpperCase(int c)
{
  if (c >= 'a' && c <= 'z')
    return c + 'A' - 'a';
  else
    return c;
}

int main(void)
{
  char enteredStr[32];
  scanf("%[^\n]%*c", enteredStr);

  char initialStr[5];
  int initialStrIdx = 0;

  int isFirst = 1;

  for (int i = 0; i < sizeof(enteredStr); i++)
  {
    int letterNum = enteredStr[i];
    char letter = enteredStr[i];

    if (letterNum == 0)
    {
      break;
    }

    if (isFirst == 1)
    {
      if (letterNum >= 'A' && letterNum <= 'z')
      {
        initialStr[initialStrIdx++] = toUpperCase(letter);
        isFirst = 0;
      }
    }
    else
    {
      if (isspace(letter))
      {
        isFirst = 1;
      }
    }
  }

  char initialLetters[initialStrIdx + 1];
  for (int i = 0; i < initialStrIdx; i++)
  {
    initialLetters[i] = initialStr[i];
  }

  printf("%s\n", initialLetters);
}