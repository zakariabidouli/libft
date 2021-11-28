#include "libft.h"

void    *ft_memcpy(void *restrict dst,	const void *restrict src,	size_t n)
{
    size_t i;
	// char *tmp;
	char *tmp2;

	i = 0;
	// tmp = (char *)dst;
	tmp2 = (char *)src;
	if (src == NULL || n == 0)
		return NULL;
	while (((char *)dst)[i] && i <= n)
	{
		((char *)dst)[i] = tmp2[i];
		i++; 
	}
	((char *)dst)[i] = '\0';
	return (dst);
}


#include <stdio.h>

int main ()
{
	char *src  = strdup("abcdefghij");
	char dst[15];
	ft_memcpy((void *) dst, (void *) src, 38);
	printf("%s",dst);
	return (0);
}
