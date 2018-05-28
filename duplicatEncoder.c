#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int  is_in(char *str, int pos, size_t len)
{
  for (size_t i = 0; i < len; i++)
  {
    if (tolower(str[i]) == tolower(str[pos]) && i != pos)
      return (1);
  }
  return (0);
}
char *DuplicateEncoder(char *str)
{
  char *ret;
  size_t len;
  size_t i;
  size_t j;
  int dup;
  
  len = strlen(str);
  i = 0;
  dup = 0;
  ret = (char *)malloc(sizeof(char ) * len + 1);
  for (i; i < len; i++)
  {
    if (is_in(str, i, len) == 0)
      ret[i] = '(';
    else ret[i] = ')';
  }
  ret[i] = '\0';
  return  ret;
}
