#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
    {
        if (s[i] == (unsigned char)c)
            return ((char *)&s[i]);
        i++;
    }
    if (s[i] == (unsigned char)c)
            return ((char *)&s[i]);
    return (0);
}
// #include <stdio.h≥
// int main()
// {
//      char *s = "0000000000";
//      char x;
//      int c = '0';
//      x = (char)c;

//     printf("%s\n", ft_strchr(s ,c));
//     //printf("%s\n", strchr(s ,c));
//     return 0;
// }
