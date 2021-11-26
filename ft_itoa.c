#include "libft.h"

char *ft_itoa(int n)
{
	int nlen;
	int i;
	int j;
	char *p;

	nlen = 0;
	i = n;
	j = n;
	// if (i == 2147483647)
	// 	retrurn
	if (i < 0)
	{
		nlen += 1;
		i *= (-1);
		n *= (-1);
	}
	while ( i != 0)
	{
		i = i / 10;
		nlen++;
	}
	p = malloc((char)nlen + 1);
	if (p == NULL)
		return (NULL);
	p[nlen + 1]= '\0';
	while (nlen-- > i)
	{
		p[nlen] = (n % 10) + '0';
		n = n / 10;
	}
	if( j < 0)
		p[0] = '-';
	return(p);
}
// int main()
// {
// 	int  i = 214748364;
// 	printf("[%s]",ft_itoa(i));
// 	return 0;
// }