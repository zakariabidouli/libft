#include "libft.h"

void					*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*new_dest;
	unsigned char		*new_src;

	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		new_dest = (unsigned char *)dest;
		new_src = (unsigned char *)src;
		while (n--)
			*new_dest++ = *new_src++;
	}
	else
	{
		new_dest = (unsigned char *)dest + (n - 1);
		new_src = (unsigned char *)src + (n - 1);
		while (n--)
			*new_dest-- = *new_src--;
	}
	return (dest);
}

// #include <stdio.h>
// int main ()
// {
// 	char *src  = strdup("0123456789");
// 	char dst[15] ;
// 	ft_memmove((void *) dst, (void *) src, 38);
//     printf("[%s]\n", memmove((void *) dst, (void *) src, 38));
// 	printf("%s",ft_memmove((void *) dst, (void *) src, 38));
// 	return (0);
// }