#include<unistd.h>
int	ft_strlen(char	*str)
{
	int	i;
	i = 0;
	while(str[i])
		i++;
	return(i);
}
int main(int    ac, char    **av)
{
	int i;
	int j;

	i =  0;
	j =  ac - 1;

	while(av[j][i] && ac > j && j >= 1)
	{
		write(1 , &av[j][i], ft_strlen(&av[j][i]));
		write(1, "\n", 1);
		j--;
	}

	return (0);
}