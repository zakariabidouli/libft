#include "libft.h"


int search(const char  *set, char c)
{
    int i;

    i = 0;
    while (set[i])
    {    
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char    *p;
    int     i;
    int     j;

    if (set == NULL)
        return ((char *)s1); //??
    i = 0;
    while(s1[i])
    {
        if (search(set, s1[i]))
            i++;
        else
            break ;
    }
    j = ft_strlen((char *)s1);
    while(j != i)
    {
        if (search(set, s1[j - 1]))
            j--;
        else
            break ;
    }
	p = malloc (sizeof(char) * (j - i));
    if (p == NULL)
        return NULL;
	p = ft_substr(s1, i, j - i);
	// free (p);
    return (p);
}
// #include <stdio.h>
// int main ()
// {
//     char *s = "abcdba";
//     char *st = "acb";
//     printf("[%s]\n", ft_strtrim(s,st));
//     return 0;
// }