#include <stdio.h>
#include <stdbool.h>

struct node
{
  int n;
  struct node *left;
  struct node *right;
};

typedef struct node node;

bool search(int n, node *tree)
{

  if (tree == NULL)
  {
    return false;
  }

  if (n < tree->n)
  {
    return search(n, tree->left);
  }
  if (n > tree->n)
  {
    return search(n, tree->right);
  }

  if (n == tree->n)
  {
    return true;
  }
}