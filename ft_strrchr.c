#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;  //ft_strlen
    while(s[i])
        i++;
    while(i > -1)
    {
        if (s[i] == (char)c)
            return ((char*)&s[i]);
        i--;
    }
    return (0);
}
// int main()
// {
//      char *s = "abc123456739";
//      char x;
//      int c = '1';
//      x = (char)c;

//     printf("[%s]\n", ft_strrchr(s ,c));
//     //printf("%s\n", strchr(s ,c));
//     return 0;
// }
