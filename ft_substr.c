#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *tmp;
    char    *p;
    int     i;
    int     j;

  
    tmp = (char *)s;
    p = (char *)malloc(len + 1);
    if (p == NULL)
        return (NULL);
    i = 0;
    j = 0;
    while (tmp[i])
    {
        if (i == start)
        {
            while (tmp[i] && (j < len))
            {
                p[j] = tmp[i];
                i++;
                j++;
            }
        }
        i++;
    }
    p[i]='\0';
    return (p);
}
// int main()
// {
//     printf ("[%s]\n", ft_substr("ABCDEF", 0, 3));
//     return 0;
// }
