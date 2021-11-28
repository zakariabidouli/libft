#include "libft.h"

// {
// 	size_t	j;
// 	// char 	*tmpdest;


// 	if (dest == NULL || src == NULL)
// 		return 0;
// 	// tmpdest=malloc (sizeof(char)*dstsize);
// 	// if (tmpdest == NULL)
// 		// return 0;
// 	if (dstsize != 0)
// 	{
// 		// tmpdest = dest;
// 		j = ft_strlen(dest);
// 		i = 0;
// 		while (src[i] != '\0' && i < (dstsize - 1))
// 		{
// 			((char *)dest)[j] = ((char *)src)[i];
// 			i++;
// 			j++;
// 		}
// 		((char *)dest)[j] = '\0';
// 	}
// 	return (j);
// }

// int main ()
// {
// 	size_t dstsize = 15;
// 	char *restrict src = "hello";
// 	char *restrict desti = "world";
	

// 	// printf ("[%zu]", dstsize);

// 	printf ("[%zu]",ft_strlcpy(desti, src, dstsize));
// }

size_t	ft_strlcpy(char	* dest, const char	* src, size_t	dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dstsize)
	{
		return (src_len);
	}
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}