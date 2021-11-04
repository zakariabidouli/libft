
#include <unistd.h>
#include <stdio.h>
char    *ft_strstr(char    *str, char    *to_find)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    k;

    if (!*to_find)
        return (str);
    i = 0;
    while (str[i])
    {
        j = 0;
        k = i;
        while (to_find[j] == '\0' || str[k] == to_find[j])
        {
            if (to_find[j] == '\0')
                return (&str[i]);
            k++;
            j++;
        }
        str++;
    }
    return (0);
}
int main() 
{
  char  dest[]="abcdeffghijklmn";
  printf("%s",ft_strstr(dest, "f"));

  return 0;
}
