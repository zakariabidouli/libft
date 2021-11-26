#include "libft.h"
char *ft_strcat(char *dest, char *src)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    while(dest[i])
        i++;
    j = 0;
    while(src[j]) 
    {
        dest[i]=src[j];
        j++;
        i++;
    }
    dest[i]='\0';
    return(dest);
}

// int main()
// {   
//     char s[20]="abcd";
//     char d[20]="abcd";
//     printf("%s\n", ft_strcat(s,"efgh"));
//     printf("%s", strcat(d,"abcaadd"));
//     return 0;
// }