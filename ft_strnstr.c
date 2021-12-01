#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    size_t k;

    j = 0;
    i = 0;
	if (!*needle)
        return ((char *)haystack);
    while (i < len && haystack[i])
    {
		if (haystack[i] == needle[j])
        {
			k = i;

        	while ((k < len) && (needle[j]== '\0' || haystack[i] == needle[j]))
        	{
            	j++;
				k++; 
            	if (needle[j]== '\0')
                	return ((char *)&haystack[i]);
        	}
		}
		i++;
    }
    return (0);
}

#include <stdio.h>

int main ()
{
    const char *largestring = "aaabcabcd";
    const char *smallstring = "abcd";
    char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 10);
    printf ("%s\n", ptr);
    printf("%s\n",strnstr(largestring, smallstring, -1));
    return 0;
}
