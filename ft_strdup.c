#include "libft.h"

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