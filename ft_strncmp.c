#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{

	char *str1;
	char *str2;
	size_t	i;

	if (!n)
		return 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while ((str1[i] == str2[i]) && (i < (n -1)) && str1[i] && str2[i])
		i++;
	return (str1[i] - str2[i]);	
}
// #include <stdio.h>

// int main ()
// {
// 	const char *s1 = "abcd";
// 	const char *s2 = "abce";
// 	printf ("[%d]",ft_strncmp(s1,s2,3));
// 	return 0;
// }