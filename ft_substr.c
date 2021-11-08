#include <string.h>
#include <stdlib.h>
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *tmp;
    char    *ptr;
    int     i;
    int     j;

    i = 0;
    j = 0;
    tmp = (char *)s;
    ptr = (char *)malloc(len);
    if (ptr == NULL)
        return (NULL);
    while (tmp[i])
    {
        if (tmp[i] == (char)start && i < len) 
            while (ptr[j])
            {
                tmp[i] = ptr[j];
                i++;
                j++;
            }
        i++;
    }
    return (ptr);
}
int main()
{
    char *p;
    char  *src  = "abcdefgh";
	unsigned int  x = (char)'b';
    p = ft_substr(src, x, 5);
    printf ("[%s]",p);
    return 0;
}
