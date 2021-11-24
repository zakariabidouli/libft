#include <stdlib.h>

int ft_atoi(const char *str)
{
    char *tmp;
    int i;
    int j;
    int x;

    tmp =  (char *) str;
    i = 0;
    j = 0;
    while (tmp[i] == '-' && i < 1)
    {
        if (tmp[i] == '-')
            j++;
		i++;
    }
	x = 0;
    while ( '0' <= tmp[i] && tmp[i] <= '9')
	{
		x *= 10;
		x += tmp[i] - '0';
		i++;
	}

	if (j % 2)
		x = -x;
	return (x);
    }

#include <stdio.h>
int	main()
{
	printf("[%d]\n",ft_atoi("--1297369"));
	printf("[%d]",atoi("--1297"));

	return (0);
}