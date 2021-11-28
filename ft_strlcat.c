#include "libft.h"



size_t	ft_strlcat(char	*dest, char	*src, size_t	dstsize)
{
	size_t	org_len;
	size_t	i;
	size_t	j;

	if (dest == NULL && dstsize == 0)
		return(ft_strlen(src));
	i = 0;
	j = ft_strlen(dest);
	org_len = j;
	if (dstsize < j || !dstsize)
		return (dstsize + ft_strlen(src));
	while (src[i] && (j < (dstsize - 1)))
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (org_len + ft_strlen(src));
}
#include <stdio.h>


// int main () {
//    char src[50] = "";
//    char dest[50] = "";

// 	ft_strlcat(dest, src, 50);
// 	// strlcat(dest, src, 50);

//    printf("Final destination string : |%s|", dest);
   
//    return(0);
// }
int main()
{
	printf("%zu", ft_strlcat(NULL, "wakaris", 0));
}