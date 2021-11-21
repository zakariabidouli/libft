#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;
	i = 0;
	while(str[i])
		i++;
	return(i);
}

char uppercase(unsigned int i, char c)
{
    if (c >= 'a' && c <= 'z')
        return c -= 32;
    return c;
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*c_s;

	if (!s || !f)
		return (NULL);
	c_s = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (c_s == NULL)
		return (NULL);
	i = -1;
	while (s[++i] != '\0')
		c_s[i] = (*f)(i, s[i]);
	c_s[i] = '\0';
	return (c_s);
}
int main ()
{
    char *p;

    char (*ptr)(unsigned int, char);

    ptr = uppercase;
    p = ft_strmapi("ABCAcdcd", ptr);
    printf ("[%s]\n",p);
    return (0);
}