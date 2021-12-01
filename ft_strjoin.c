#include "libft.h"


// char	*ft_strcat(char	*dest, char	*src)
// {
// 	unsigned int	i;
// 	unsigned int	j;

// 	i = 0;
// 	while (dest[i])
// 		i++;
// 	j = 0;
// 	while (src[j])
// 	{
// 		dest[i] = src[j];
// 		j++;
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

char *ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	int		i;
	int		j;
	char	*out;

	size = ft_strlen(s1) + ft_strlen(s2);
	out = malloc (sizeof(char) * (size + 1));
	out[size] = '\0';
	if (out == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] && i < ft_strlen(s1))
	{
		out[i] = s1[i];
		i++;
	}
	while (s2[j] && j < ft_strlen(s2))
	{
		out[i] = s2[j];
		i++;
		j++;
	}

	return (out);
}

// #include <stdio.h>
// int main()

// {
// 	char const *s = "";
// 	char const *p = "42";

//     printf("%s\n",ft_strjoin(s, p));

//     return 0;
// }