#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    size_t k;
    char *tmp;
    char *tmp2;

	// if (len > ft_strlen(haystack))
	// 	return (needle);
    tmp = (char *)haystack;
    tmp2 = (char *)needle;
    j = 0;
    i = 0;
	if (!*tmp2)
        return ((char *)tmp);
    while (i < len && tmp[i])
    {
        k = i;
        while ((tmp[k] == tmp2[j] || tmp2[j] == '\0') && (k < len))
        {
            if (tmp2 [j]== '\0')
                return ((char *)&tmp[i]);
            k++;
            j++;            
        }
        if (tmp2[j] == '\0')
            return ((char *)&tmp[i]);
        i++;
    }
    return (0);
}

#include <stdio.h>

// int main ()
// {
//     const char *largestring = "aaabcabcd";
//     const char *smallstring = "abcd";
//     char *ptr;

// 	ptr = ft_strnstr(largestring, smallstring, -1);
//     printf ("%s\n", ptr);
//     printf("%s\n",strnstr(largestring, smallstring, -1));
//     return 0;
// }
