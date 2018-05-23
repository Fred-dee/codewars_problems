#include <stdlib.h>
#include <string.h>
#include <stdio.h>
// C returns a structure. Results are compared by way of strings. See "Examples" tab.
typedef long long ll;
// sz is array size.
typedef struct Data Data;
struct Data {
	 ll* array;
	 int sz;
};

ll rev_input(ll input)
{
  ll ret;
 
  ret = 0; 
  while (input != 0)
  {    
	ret = ret * 10 + (input % 10);
	input = input / 10; 
  }
  return (ret);
}

int is_prime(ll num)
{
  ll i;
  if (num == 2)
	return (1);
  if (num < 2)
	return (-1);
  for (i = 2; i < num/2; i++)
  {
	if (num % i == 0)
	  return (-1);
  }
  return (1);
}
Data* backwardsPrime(ll start, ll end) {
  ll i;
  ll rev;
  int count;
  Data *ret;
 
  i = start;
  count = 0;
  for (i; i < end + 1; i++)
  {
	 if (is_prime(i) == 1)
	 {
	   rev = rev_input(i);
	   if (is_prime(rev) == 1 && rev != i)
		 count++;
	 }
  }
  if ((ret = (Data *)malloc(sizeof(Data*))) == NULL)
	return (NULL);
  if (count == 0)
  {
	ret->sz = 0;
	ret->array = NULL;
  }
  else
  {
	  ret->sz = count;
	  if ((ret->array = (ll*)malloc(sizeof(ll) * count)) == NULL)
		return (NULL);
	  count = 0;
	  for (i = start; i < end + 1; i++)
	  {
		 if (is_prime(i) == 1)
		 {
		   rev = rev_input(i);
		   if (is_prime(rev) == 1)
			 ret->array[count++] = i;
		 }
	  }
  }
  return (ret);
}