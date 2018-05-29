double factorial(int n)
{
    double f = 1;
    int i;
    for(i = 1; i <= n; i++) 
    {
      f *= i;
    }
    return f;
}
double going(int n) {
    double ret;
    double sum;
    ret = 0;
    sum = 0;
    ret = 1 / factorial(n);
    for (int i = 1; i < n; i++)
      sum += factorial(i);
    return ((ret * sum) + 1);
}