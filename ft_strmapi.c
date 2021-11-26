#include "libft.h"

// char uppercase(unsigned int i, char c)
// {
//     if (c >= 'a' && c <= 'z')
//         return c -= 32;
//     return c;
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*c_s;

	if (!s || !f)
		return (NULL);
	c_s = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (c_s == NULL)
		return (NULL);
	i = -1;
	while (s[++i] != '\0')
		c_s[i] = (*f)(i, s[i]);
	c_s[i] = '\0';
	return (c_s);
}
// int main ()
// {
//     char *p;

//     char (*ptr)(unsigned int, char);

//     ptr = uppercase;
//     p = ft_strmapi("ABCAcdcd", ptr);
//     printf ("[%s]\n",p);
//     return (0);
// }