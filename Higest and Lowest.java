public class Kata {
  public static String HighAndLow(String numbers) {
    int min;
    int max;
    int tmp;
    int i = 0;
    String ret = "";
    String[] tok = numbers.split(" ");
    max = min = Integer.parseInt(tok[0]);
    while(i < tok.length)
    {
      tmp = Integer.parseInt(tok[i]);
      if (tmp > max)
        max = tmp;
      if (tmp < min)
        min = tmp;
      i++;
    }
    ret = Integer.toString(max) + " " + Integer.toString(min);
    return ret;
  }
}