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
char    *ft_strstr(char    *str, char    *to_find)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    k;

    if (!*to_find)
        return (str);
    i = 0;
    while (str[i])
    {
        j = 0;
        k = i;
        while (to_find[j] == '\0' || str[k] == to_find[j])
        {
            if (to_find[j] == '\0')
                return (&str[i]);
            k++;
            j++;
        }
        str++;
    }
    return (0);
}
char	*ft_strdup(char	*src)
{
	int		i;
	char	*p;

	i = 0;
	while (src[i])
		i++;
	p = (char *)malloc(i + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
    {
        if (s[i] == (char)c)
            return ((char*)&s[i]);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char    *s2;
    char    *set1;
    int     i;

    s2 = (char  *)s2;
    set1 = (char  *)set1;
    i = 0;
    while(s2[i])
    {
        ft_strchr(s2,set1[i]);
        i++;
    }
    return(ft_strdup(s2));
}
#include <stdio.h>
int main ()
{
    char *s = "abclkjfkrfjacccccaaaaabb";
    char *st = "abc";
    printf("[%s]",ft_strtrim(s,st));
    return 0;
}