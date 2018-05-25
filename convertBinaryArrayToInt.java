import java.util.List;

public class BinaryArrayToNumber {

    public static int ConvertBinaryArrayToInt(List<Integer> binary) {
        int ret;
        int size;
    
        ret = 0;
        size = binary.size() - 1;
        for (int i = 0; i < binary.size(); i++)
        {
          if ((Integer)binary.get(i) == 1)
            ret += Math.pow(2, size);
          size--;
        }
        return (ret);
    }
}