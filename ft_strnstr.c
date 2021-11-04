#include <string.h>
#include <stdio.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;
    j = 0;
    i = 0;
    if (needle == NULL)
        return ((char *)haystack);
    while (haystack[i] && i < len)
    {
        while (haystack[i] == needle[j])
        {
            j++;
            return (0);            
        }
        i++;
    }
    return ((char *)needle);
}

int main ()
{
    printf ("%s", ft_strnstr("you", "are you d", 10));
    return 0;
}