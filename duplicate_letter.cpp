#include <stdio.h>
#include <string.h>
#include <cctype>
#include <cstdlib>

using namespace std;

size_t duplicateCount(const char* in)
{
	bool dup[26] = {false};
	size_t ret;
	
	ret = 0;
	for (int i = 0; i < strlen(in) - 1; i++)
	{
		if (dup[i] == false)
		{
			for (int j = i + 1; j < strlen(in); j++)
	  		{
				if (tolower(in[i]) == tolower(in[j]))
				{
		  			dup[tolower(in[i]) - 'a'] = true;
		  			break;
				}
			}
	  	}
	}
	for (int i = 0; i < 26; i++)
	{
	  if (dup[i] == true)
	  {
		ret++;
	  }
	}
	return (ret);
}

int main()
{
	printf("%d\n", duplicateCount("abcde"));
	printf("%d\n", duplicateCount("aabbcde"));
	printf("%d\n", duplicateCount("aabBcde"));
	printf("%d\n", duplicateCount("indivisibility"));
	return (0);
}