import java.util.*;

public class DescendingOrder {
  public static int sortDesc(final int num) {
    int tmp;
     int ret = 0;
    int i = 0;
     Vector v = new Vector();
    
    tmp = num;
    while (tmp > 0)
    {
      v.addElement(new Integer(tmp % 10));
      tmp /= 10;
    }
    sortVector(v);
    for (i =0; i < v.size(); i++)
    {
      ret = (ret * 10) + (Integer)v.get(i);
    }
    return ret;
  }
  
  private static void sortVector(Vector v)
  {
    int tmp;
   
    for (int i = 0; i < v.size() - 1; i++)
      for (int j = i + 1; j < v.size(); j++)
      {
        if ((Integer)v.get(i) < (Integer)v.get(j))
        {
          tmp = (Integer)v.get(i);
          v.set(i, v.get(j));
          v.set(j, tmp);
        }
      }
  }
}