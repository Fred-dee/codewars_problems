#include <cmath>

class MaxDiffLength
{
public:
    static int mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2)
    {
      int max;
      int tmp;
      
      if (a1.empty() || a2.empty())
        return (-1);
      max = abs(a1[0].length() - a2[0].length());
      for (size_t i = 0; i < a1.size(); i++)
        for (size_t j = 0; j < a2.size(); j++)
        {
          tmp = abs(a1[i].length() - a2[j].length());
          if (max < tmp)
            max = tmp;
        }
   
      return (max);
    }
};
