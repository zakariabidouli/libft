#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
    {
        if (s[i] == (char)c)
            return ((char*)&s[i]);
        i++;
    }
    return (0);
}
// int main()
// {
//      char *s = "123456789";
//      char x;
//      int c = '3';
//      x = (char)c;

//     printf("%s\n", ft_strchr(s ,c));
//     //printf("%s\n", strchr(s ,c));
//     return 0;
// }
