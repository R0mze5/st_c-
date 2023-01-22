#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char encrypt_symbol(char symbol, int offset);

int main(int argc, char *argv[])
{

  // get encrypted phrase

  if (argc != 2)
  {
    printf("args should be string\n");
    // if error, we should return 1 , according to convention
    return 1;
  }

  int encodedPhraseLength = 0;

  while (argv[1][encodedPhraseLength] != '\0')
  {
    if (!isalpha(argv[1][encodedPhraseLength]))
    {
      printf("args should be string\n");
      // if error, we should return 1 , according to convention
      return 1;
    }
    encodedPhraseLength++;
  }

  if (encodedPhraseLength <= 0)
  {
    printf("args should be string\n");
    // if error, we should return 1 , according to convention
    return 1;
  }

  char encodedPhrase[encodedPhraseLength];

  for (int i = 0; i < encodedPhraseLength; i++)
  {
    encodedPhrase[i] = argv[1][i];
  }

  // - get encrypted phrase

  // get encrypted text

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

  // - get encrypted text

  // - encrypt entered text with encrypt phrase

  char encryptedText[enteredLastIndex];
  int encodedPhraseSymbolNumber = 0;

  for (int i = 0; i < enteredLastIndex; i++)
  {
    char encodedPhraseSymbol = encodedPhrase[encodedPhraseSymbolNumber];

    if (isalpha(enteredString[i]))
    {
      encryptedText[i] = (enteredString[i] - 'a' + encodedPhraseSymbol - 'a') % 26 + 'a';

      encodedPhraseSymbolNumber = (encodedPhraseSymbolNumber + 1) % encodedPhraseLength;
    }
    else
    {
      encryptedText[i] = enteredString[i];
    }
  }

  printf("%s \n", encryptedText);

  // if error, we should return 0 , according to convention (default return value of main)
  return 0;
}
