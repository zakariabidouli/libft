#include "libft.h"


char	*ft_strcat(char	*dest, char	*src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int	size, char	**strs, char	*sep)
{
	int		tot_size;
	int		i;
	char	*output;

	tot_size = 0;
	i = -1;
	while (++i < size)
	{
		if (i)
			tot_size += ft_strlen(sep);
		tot_size += ft_strlen(strs[i]);
	}
	output = malloc(tot_size + 1);
	*output = '\0';
	if (output == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (i)
			ft_strcat(output, sep);
		ft_strcat(output, strs[i]);
		i++;
	}
	return (output);
}
// #include <stdio.h>
// int main(int    argc,char   **argv)
// {
//     printf("%s\n",ft_strjoin(argc,argv," , "));

//     return 0;
// }