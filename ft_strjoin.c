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
	return 0;
	int		tot_size;
	int		i;
	char	*output;
	char	*cast;

	tot_size = ft_strlen(s1) + ft_strlen(s2);
	output = malloc (sizeof(char) * (tot_size + 1));
	*output = '\0';
	if (output == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i])
			output[i] = s1[i];
		output[i]= s2[i]; 
	}
	return (output);
}
// #include <stdio.h>
// int main(int    argc,char   **argv)
// {
//     printf("%s\n",ft_strjoin(argc,argv," , "));

//     return 0;
// }