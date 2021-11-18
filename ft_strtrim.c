#include <stdio.h>
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
    char    *p;
    int     i;
    int     j;

  
    tmp = (char *)s;
    p = (char *)malloc(len + 1);
    if (p == NULL)
        return (NULL);
    i = 0;
    j = 0;
    while (tmp[i])
    {
        if (i == start)
        {
            while (tmp[i] && (j < len))
            {
                p[j] = tmp[i];
                i++;
                j++;
            }
        }
        i++;
    }
    p[i]='\0';
    return (p);
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
    return (ft_substr(s1, i, j - i));
}

int main ()
{
    char *s = "0123456789";
    char *st = "019";
    printf("[%s]\n", ft_strtrim(s,st));
    return 0;
}