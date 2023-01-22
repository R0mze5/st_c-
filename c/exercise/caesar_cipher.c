#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char encrypt_symbol(char symbol, int offset);

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("args should be one number\n");
    // if error, we should return 1 , according to convention
    return 1;
  }

  int k = atoi(argv[1]);

  if (k < 0)
  {
    printf("args should be one number\n");
    // if error, we should return 1 , according to convention
    return 1;
  }

  printf("please enter encrypted text:\n");

  char enteredString[32];
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

  char initialLetters[enteredLastIndex];
  for (int i = 0; i < enteredLastIndex; i++)
  {
    initialLetters[i] = encrypt_symbol(enteredString[i], k);
  }

  printf("%s \n", initialLetters);

  // if error, we should return 0 , according to convention (default return value of main)

  return 0;
}

char encrypt_symbol(char symbol, int offset)
{
  if (isalpha(symbol))
  {
    int asciiStartNumber = isupper(symbol) ? 'A' : 'a';
    return (symbol - asciiStartNumber + offset) % 26 + asciiStartNumber;
  }

  return symbol;
}