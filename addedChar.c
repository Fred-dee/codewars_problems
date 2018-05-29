// Average runtime: ?ms
int  sum_string(const char *s)
{
  int ret;
  int i;
  
  i = 0;
  ret = 0;
  while (s[i] != '\0')
    ret += s[i++];
  return ret;
}
char added_char(const char *s1, const char *s2) {
  // use strlen() to get string size
  return ((int) ((sum_string(s2) - sum_string(s1))/ 3)); 
}
