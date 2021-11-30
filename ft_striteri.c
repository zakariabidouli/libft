#include "libft.h"



void
iter(unsigned int i, char * s) {
	*s += i;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{	
		(*f)(i, &s[i]);
		i++;
	}	
}
// #include <stdio.h>
// int main ()
// {
//     char *s = strdup("00000");

//     ft_striteri(s, iter);
//     printf ("[%s]\n", s);
//     return (0);
// }