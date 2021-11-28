#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;
    if (!n)
        return 0;
    while (str1[i] == str2[i] && (i < (n - 1)))
        i++;
    return (str1[i] - str2[i]);
}
// #include <stdio.h>
// int main()
// {
//     char str1[15] = "01334";
//     char str2[15] = "01335";

//     printf ("%d\n", ft_memcmp(str1, str2, 10));
//     printf ("%d\n", memcmp(str1, str2, 10));
//     return 0;
// }
