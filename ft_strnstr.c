#include <string.h>
#include <stdio.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;
    int k;
    char *tmp;
    tmp = (char *)haystack;
    j = 0;
    i = 0;
    if (!*needle)
        return ((char *)tmp);
    while (tmp[i] && i < len )
    {
        k = i;  
        while ((tmp[k] == needle[j] || needle[j] == '\0') && k < len)
        {
            if (needle == '\0')
                return ((char *)&tmp[i]);
            j++;
            k++;            
        }
        if (needle[j] == '\0')
            return ((char *)&tmp[i]);
        i++;
    }
    return (0);
}

int main ()
{
    const char *largestring = "TutorialsPoint";
    const char *smallstring = "tor";
    char *ptr;

    ptr = strnstr(largestring, smallstring, 4);
    printf ("%s", ptr);
    return 0;
}