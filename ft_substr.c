#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    char    *p;
    size_t     i;
    size_t  end;

	if (len > (size_t)ft_strlen (s))
		len = (size_t) ft_strlen (s);
	if (start > (unsigned int)len)
		return (ft_strdup(""));
	
    p = malloc(sizeof(char) * (len + 1));
	if (!p)
        return (NULL);
    i = start;
    end = 0;
    str = (char *)s;
	while (str[start] && (end < len))
		p[end++] = str[start++];
    p[end]='\0';
    return (p);
}

// #include <stdio.h>
// int main()
// {
//     printf ("[%s]\n", ft_substr(strdup("1"), 1, 1));
//     return 0;

// }