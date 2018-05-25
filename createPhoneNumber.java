public class Kata {
  public static String createPhoneNumber(int[] numbers) {
    String ret = "(";
    
    for (int i = 0; i < 10; i++)
    {
      ret += numbers[i];
      switch (i)
      {
        case 2: ret += ") ";
                break;
        case 5: ret+= "-";
                break;
      }
    }
    return (ret);
  }
}