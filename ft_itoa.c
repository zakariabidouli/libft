#include "libft.h"

char *ft_itoa(int n)
{
	int nlen;
	int i;
	int j;
	char *p;

	if (n == -2147483648)
	{	
		p = strdup("-2147483648");
		return (p);
	}
	if (n == 0)
	{
		p = ft_strdup("0");
		return (p);
	}	 
	i = n;
	j = n;
	nlen = 0;
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
// #include <stdio.h>
// int main()
// {
// 	int  i = 42;
// 	printf("[%s]\n",ft_itoa(i));
// 	return 0;
// }