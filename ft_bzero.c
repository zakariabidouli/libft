#include "libft.h"
void *ft_bzero(void *s, size_t n)
{
    int i;
    char *x;

    x = (char *)s;
    i = 0;
    while (i < n)
    {
        x[i] = '\0';
        i++;
    }
    return (s);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *s = strdup("00000areyougiongfine");
//     // bzero((void *)s, 5);
//     // printf("%s\n",s + 5);

//     ft_bzero((void *)s, 4);
//     printf("%s",s + 4);

//     return 0;
// }