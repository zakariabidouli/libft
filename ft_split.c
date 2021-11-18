#include <stdlib.h>
#include <stdio.h>

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
char *limit(char *str, char   c)
{
    int i;
    int j;
    char *p;

    i = 0;
    while(str[i])
    {
        if(search(str,c))
           break;
        i++; 
    }
    j = 0;
    p = (char *)malloc(i + 1); 
    if (p == NULL)
        return(NULL);
    while (str[j] && j <= i)
    {
        p[j] = str[j];
        j++;
    }
    p[j] = '\0';
    return (p);
}

char **ft_split(char const *s, char c) // 
{
    int i;
    char **ptr = NULL;

    
 
}

int main()
{
    char **p = ft_split("ABCDEF",'D');
    for (size_t i = 0; p[i] != 0; i++)
    {
        printf ("[%s]\n", p[i]);
        /* code */
    }
    
    return 0;
}

/* [ "AB", "DE", "DE"]
*/