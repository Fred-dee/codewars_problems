int sumLeft(const int *values, int pos)
{
  int ret;
  int i;
  
  ret = 0;
  i = pos;
  while (i > -1)
  {
    ret += values[i--];
  }
  return (ret);
}
int sumRight(const int *values, int length, int pos)
{
  int ret;
  int i;
  
  ret = 0;
  i = pos;
  while (i < length)
    ret += values[i++];
  return (ret);
}
int find_even_index(const int *values, int length) {
  int i;
  
  i = 0;
  while (i < length)
  {
    if (sumLeft(values, i) == sumRight(values, length, i))
      return (i);
    i++;
  }
  return -1;
}