#include <string.h>
#include <stdio.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;
    int k;
    char *tmp;
    char *tmp2;
    tmp = (char *)haystack;
    tmp2 = (char *)needle;
    j = 0;
    i = 0;
    if (!*tmp2)
        return ((char *)tmp);
    while (tmp[i] && i < len )
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

int main ()
{
    const char *largestring = "TutorialsPoint";
    const char *smallstring = "u";
    char *ptr;

    ptr = ft_strnstr(largestring, smallstring, 1);
    printf ("%s\n", ptr);
    printf("%s\n",strnstr(largestring, smallstring, 1));
    return 0;
}