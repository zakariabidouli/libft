#include "libft.h"
void    *ft_memchr(const void *s, int c, size_t n)
{
    int i;
    char *tmp;
    tmp = (char *)s;

    i = 0;
    while(i < n)
    {
        if (tmp[i] == (unsigned char)c)
            return ((char *)&tmp[i]);
        i++;
    }
    return (0);
}
// #define TEST str, ch, 10
// int main()
// {
//     const char *str = "123456789";
//     const char ch = '1';

  
//     printf("str = %s\n\n", str);
//     printf("Remaining string after '%c' : %s\n", ch, (char *) ft_memchr( TEST));
//     printf("Remaining string after '%c' : %s\n", ch, (char *) memchr( TEST ));

//     return 0;
// }
