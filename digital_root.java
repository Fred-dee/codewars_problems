public class DRoot {
  public static int sum_digit(int n)
  {
    int ret;
    
    ret = 0;
    while (n > 0)
    {
      ret += n % 10;
      n/= 10;
    }
    return ret;
  }
  public static int digital_root(int n) {
    if (n > 9)
      return (digital_root(sum_digit(n)));
    return (n);
  }
}