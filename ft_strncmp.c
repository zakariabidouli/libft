#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{

	char *tmp;
	char *tmp1;
	size_t	i;

	if (s1 == 0 || s2 == 0)
		return 0;
	tmp = (char *)s1;
	tmp1 = (char *)s2;
	i = 0;
	while (tmp[i] == tmp1[i] && i <= n)
	{
		i++;
	}
	return (tmp[i] - tmp1[i]);	
}
// #include <stdio.h>

// int main ()
// {
// 	const char *s1 = "abcd";
// 	const char *s2 = "abce";
// 	printf ("[%d]",ft_strncmp(s1,s2,3));
// 	return 0;
// }