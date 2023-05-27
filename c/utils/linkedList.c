#include <stdio.h>

struct node
{
  int n;
  struct node *next;
};

typedef struct node node;

int main(void)
{
}

int search(node *list, int n, )
{
  // Вначале ptr указывает на первый узел списка. Пока ptr! = NULL, мы будем разыменовывать его и проверять, является ли ptr-> n значением, которое мы ищем. Если это так, функция возвращает true.
  node *pointer = list;
  // NULL указывает на конец списка
  while (pointer != NULL)
  {
    // list -> n - перейти от адреса к целому числу
    if (list->n == n)
    {
      return 1;
    }
    pointer = list->next;
  }

  return 0;
}