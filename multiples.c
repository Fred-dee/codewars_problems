#include <stdio.h>

int  is_mult_3(int n)
{
  return (n % 3);
}

int is_mult_5(int n)
{
  return (n % 5);
}

int solution(int number) {
		int i;
    int sum;
    
    i = number - 1;
    sum = 0;
    while (i > 2)
    {
      if (is_mult_3(i) == 0 && is_mult_5(i) == 0)
        sum+= i;
      else 
      {
        if (is_mult_3(i) == 0)
          sum += i;
        else if (is_mult_5(i) == 0)
          sum += i;
      }
      i--;
    }
    return (sum);
}