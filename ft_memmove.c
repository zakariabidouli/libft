#include "libft.h"
void * ft_memmove(void *dst, const void *src, size_t len)
{
    int i;
	char *tmp;
	char *tmp2;

	if (src == NULL || len == 0)
		return (dst);
	i = 0;
	tmp = (char *)dst;
	tmp2 = (char *)src;
	while (i <= len)
	{
		tmp[i] = tmp2[i];
		i++; 
	}
	tmp[i] = '\0';
	return (tmp);
}

#include <stdio.h>
int main ()
{
	char *src  = strdup("0123456789");
	char dst[15] ;
	ft_memmove((void *) dst, (void *) src, 38);
    printf("[%s]\n", memmove((void *) dst, (void *) src, 38));
	printf("%s",ft_memmove((void *) dst, (void *) src, 38));
	return (0);
}