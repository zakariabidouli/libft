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
char *sptwrd(char *str, char   c)
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
    p = (char *)malloc(i + 1); 
    if (p == NULL)
        return(NULL);
    j = 0;
    while (str[j] && j <= ft_strlen(str))
    {
        p[j] = str[j];
        j++;
    }
    p[j] = '\0';
    return ();
}

char **ft_split(char const *s, char c) 
{
    int i;
    char *p;
    char **ptr = NULL;
    


    *ptr[i] = (char **)malloc(ft_strlen(s));




    
 
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