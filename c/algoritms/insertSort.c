#include <stdio.h>

void printIntArray(int *printedArray, int arraySize, char *message);

int main(void)
{
  int unsortedArray[] = {1, 5, 2, 7, 3, -15, 0, 12, -35, 9, 8};

  int arraySize = sizeof(unsortedArray) / sizeof(unsortedArray[0]);

  printIntArray(unsortedArray, arraySize, "initial array");

  for (int i = 1; i < arraySize; i++)
  {
    int iValue = unsortedArray[i];

    int indexMin = i;

    while (indexMin != 0 && iValue < unsortedArray[indexMin - 1])
    {
      unsortedArray[indexMin] = unsortedArray[indexMin - 1];
      indexMin -= 1;
    }

    unsortedArray[indexMin] = iValue;
  }

  printIntArray(unsortedArray, arraySize, "sorted array");

  return 0;
}

void printIntArray(int *printedArray, int arraySize, char *message)
{
  printf("%s : [", message);

  for (int i = 0; i < arraySize; i++)
  {
    printf(" %i ", printedArray[i]);
  }

  printf("] \n");
}