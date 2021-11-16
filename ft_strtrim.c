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

char *ft_strtrim(char const *s1, char const *set)
{

 
   
}
#include <stdio.h>
int main ()
{
    char *s = "abclkjfkrfjabc";
    char *st = "abc";
    printf("[%s]",ft_strtrim(s,st));
    return 0;
}