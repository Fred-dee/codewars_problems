#include <string.h>
struct node
{
  int value;
  struct node* left;
  struct node* right;
};

int recursiveSearch(struct node *n)
{
  if (n == NULL)
    return (0);
  return (n->value + recursiveSearch(n->right) + recursiveSearch(n->left));
}
int sumTheTreeValues(struct node* root)
{
  // place your code here
  return (recursiveSearch(root));

}