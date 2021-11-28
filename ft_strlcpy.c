#include "libft.h"

size_t	ft_strlcpy(char	*restrict dest, char	*restrict src, size_t	dstsize)
{
	size_t	i;
	size_t	j;
	char *tmpdest;


	if (dest == NULL || src == NULL)
		return 0;
	return 0;

	// tmpdest=malloc (sizeof(char)*dstsize);
	// if (tmpdest == NULL)
		// return 0;
	if (dstsize != 0)
	{
		// tmpdest = dest;
		j = ft_strlen(dest);
		i = 0;
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			((char *)dest)[j] = ((char *)src)[i];
			i++;
			j++;
		}
		((char *)dest)[j] = '\0';
	}
	return (j);
}

// int main ()
// {
// 	size_t dstsize = 15;
// 	char *restrict src = "hello";
// 	char *restrict desti = "world";
	

// 	// printf ("[%zu]", dstsize);

// 	printf ("[%zu]",ft_strlcpy(desti, src, dstsize));
// }
