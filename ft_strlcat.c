#include <unistd.h>
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char	* restrict dest, char	*restrict src, size_t	dstsize)
{
	unsigned int	org_len;
	unsigned int	i;
	unsigned int	j;

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


int main () {
   char src[50] = "This is source";
   char dest[50] = "This is destination";

   ft_strlcat(dest, src, 50);

   printf("Final destination string : |%s|", dest);
   
   return(0);
}