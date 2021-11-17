#include <stdlib.h>
#include <unistd.h>
int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *tmp;
    char    *ptr;
    int     i;
    int     j;

    i = 0;
    j = 0;
    tmp = (char *)s;
    ptr = (char *)malloc(len + 1);
    if (ptr == NULL)
        return (NULL);
    while (tmp[i])
    {
        if (tmp[i] == (char)start) 
            while (ptr[j] && i < len)
            {
                ptr[i] = tmp[j];
                i++;
                j++;
            }
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

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


    if (s1 == NULL)
        return NULL;
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
    j = ft_strlen((char *)s1) - 1;
    while(s1[j])
    {
        if (search(set, s1[j]))
            j--;
        else
            break ;
    }
    printf("%d, %d\n", i, j);
    
    return (ft_substr(s1, i, j - i));
}
#include <stdio.h>
int main ()
{
    char *s = "0123456789";
    char *st = "019";
    printf("[%s]\n", ft_strtrim(s,st));
    return 0;
}