#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    char    *p;
    unsigned int     i;
    size_t     j;

	// if (start > (unsigned int)ft_strlen(s))
	// 	return 0;
    str = (char *)s;
    p = (char *)malloc(len + 1);
    if (p == NULL)
        return (NULL);
    i = 0;
    j = 0;
    while (str[i])
    {
        if (i == start)
        {
            while (str[start] && (j < len) && (j < ft_strlen (s)))
            {
                p[j] = str[start];
                start++;
                j++;
            }
        }
        i++;
    }
    p[i]='\0';
    return (p);
}
// #include <stdio.h>
// int main()
// {
//     printf ("[%s]", ft_substr("tripouille", 100, 1));
//     return 0;
// }
