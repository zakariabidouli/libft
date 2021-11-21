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

void uppercase(unsigned int i, char *c)
{
    if (c[i] >= 'a' && c[i] <= 'z')
        c[i] -= 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{	
		(*f)(i, s);
		i++;
	}	
}
#include <string.h>
int main ()
{
    char *s = strdup("abcdefcdcd");

    ft_striteri(s, uppercase);
    printf ("[%s]\n", s);
    return (0);
}