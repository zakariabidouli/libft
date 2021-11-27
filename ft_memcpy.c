#include "libft.h"

void    *ft_memcpy(void *restrict dst,	const void *restrict src,	size_t n)
{
    size_t i;
	char *tmp;
	char *tmp2;

	i = 0;
	tmp = (char *)dst;
	tmp2 = (char *)src;
	while (i < n)
	{
		tmp[i] = tmp2 [i];
		i++; 
	}
	tmp2[i] = '\0';
	return (tmp2);
}



// #include <string.h>
// #include <stdio.h>
// int main ()
// {
// 	char *src  = strdup("0123456789");
// 	char *dst = strdup(" ");
// 	ft_memcpy((void *) dst, (void *) src, 38);
// 	printf("%s",dst);
// 	return (0);
// }
