#include "libft.h"

// int ft_atoi(const char *str)
// {
//     char *tmp;
//     int i;
//     int j;
//    	unsigned int x;


//     tmp =  (char *) str;
	// if (!ft_strncmp(str, "-2147483648", 12))
	// 	return (-2147483648);
//     i = 0;
//     j = 0;
// 	if (tmp[i] == '+')
// 		i++;
//     else if (tmp[i] == '-' )
//     {    
// 		j++;
// 		i++;
// 	}
// 	x = 0;
//     while ( '0' <= tmp[i] && tmp[i] <= '9')
// 	{
// 		x *= 10;
// 		x += tmp[i] - '0';
// 		i++;
// 	}
// 	if (j != 0)
// 		x = -x;
// 	return (x);
// }





int	ft_atoi(const char	*str)
{
	int	i;
	int	j;
	int	x;
	char *s;

	i = 0;
	j = 0;
	s = (char *)str;
	while (s[i] <= 32)
		i++;
	if (s[i] == '-')
	{
		i++;
		j++;
	}
	else if (s[i] == '+')
		i++;
	if (!ft_strncmp(&str[i], "-2147483648", 12))
		return (-2147483648);
	x = 0;
	while ('0' <= s[i] && s[i] <= '9')
	{
		x *= 10;
		x += s[i] - '0';
		i++;
	}
	if (j % 2)
		x = -x;
	return (x);
}

// #include <stdio.h>
// #define TEST "+-42"

// int	main()
// {
// 	printf("[%d]\n", ft_atoi(TEST));
// 	printf("[%d]\n", atoi(TEST));

// 	return (0);
// }		 
// #include <stdio.h>
// int	main()
// {
// 	printf("%d",ft_atoi("---++  \n  \t \r \v \f 123abcd45"));
// 	return (0);
// }