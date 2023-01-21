#include <stdio.h>

#define MIN_VALUE 0.01

int main(void)
{

  float num;

  while (num < MIN_VALUE)
  {
    printf("O hai! How much change is owed? \n");

    float cur_value;
    scanf("%f", &cur_value);

    if (cur_value >= MIN_VALUE)
    {
      num = cur_value;
    }
  };

  int cent = num * 100;

  int counter = 0;

  int quoters = cent / 25;
  counter += quoters;
  cent -= quoters * 25;

  int tens = cent / 10;
  counter += tens;
  cent -= tens * 10;

  int fifths = cent / 5;
  counter += fifths;
  cent -= fifths * 5;

  counter += cent;

  printf("%i\n", counter);
}