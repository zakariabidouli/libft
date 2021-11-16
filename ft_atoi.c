#include <stdlib.h>

int ft_atoi(const char *str)
{
    char *tmp;
    int i;
    int j;
    int x;

    tmp =  (char *) str;
    i = 0;
    while (tmp[i] <= 32)
    {
        if (tmp[i] == '-')
            j++;
    }
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
	printf("%d",ft_atoi("1246"));
	return (0);
}