#include <stdio.h>


int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char	* restrict dest, char	*restrict src, size_t	dstsize)
{
	size_t	i;
	size_t	j;
	char *tmpdest;
	char *tmpsrc;


	j = ft_strlen(src);
	i = 0;
	if(dstsize == 0)
		return (0);
	if (dstsize != 0)
	{
		tmpdest = dest;
		tmpsrc = src;

		while (tmpsrc[i] != '\0' && i < (dstsize - 1))
		{
			tmpdest[i] = tmpsrc[i];
			i++;
		}
		tmpdest[i] = '\0';
	}
	return (j);
}

int main ()
{
	char *restrict src = "hello";
	char *restrict dest[15];
	*dest = "hello";
	size_t dstsize;



	printf ("[%zu]",ft_strlcpy(dest, src, dstsize));
}
