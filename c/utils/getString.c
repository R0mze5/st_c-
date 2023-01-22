#include <stdio.h>

char getString(int maxSymbolCount)
{
  char enteredString[maxSymbolCount];
  scanf("%[^\n]%*c", enteredString);

  int enteredLastIndex = 0;

  for (int i = 0; i < sizeof(enteredString); i++)
  {
    int letterNum = enteredString[i];

    if (letterNum == 0)
    {
      enteredLastIndex = i;
      break;
    }
  }

  printf("%i\n", enteredLastIndex);

  char initialLetters[enteredLastIndex];
  for (int i = 0; i < enteredLastIndex; i++)
  {
    initialLetters[i] = enteredString[i];
  }

  printf("%s \n", initialLetters);

  return initialLetters;
}