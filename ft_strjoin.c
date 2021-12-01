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
	char	*out;

	size = ft_strlen(s1) + ft_strlen(s2);
	out = malloc (sizeof(char) * (size + 1));
	// *out = '\0';
	if (out == NULL)
		return (NULL);
	i = 0;
	while ((s1[i] || s2[i]) && i <= size)
	{
		if(!s1[i])
		{
			out[i] = s2[i];
			i++;
			break;
		}
		out[i]= s1[i]; 
		i++;
	}
	return (out);
}

// #include <stdio.h>
// int main()

// {
// 	char const *s = "hello";
// 	char const *p = "lamna";

//     printf("%s\n",ft_strjoin(s, p));

//     return 0;
// }