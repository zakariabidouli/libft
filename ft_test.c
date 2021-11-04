#include <unistd.h>
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char	*src)
{
	int		i;
	char	*p;

	i = 0;
	while (src[i])
		i++;
	p = (char *)malloc(i + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

struct s_stock_str	*ft_strs_to_tab(int	ac, char	**av)
{
	int						i;
	struct s_stock_str		*list;

	list = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (list == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		list[i].size = ft_strlen (av[i]);
		list[i].str = av[i];
		list[i].copy = ft_strdup(av[i]);
		i++;
	}
	list[i].size = 0;
	list[i].str = 0;
	list[i].copy = 0;
	return (list);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb == 0)
	{
		ft_putchar ('0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr > 9)
	{
		ft_putnbr (nbr / 10);
		ft_putnbr (nbr % 10);
	}
	else
		ft_putchar (nbr + '0');
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str	*par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}
int main (int ac, char **av)
{
    ft_show_tab(ft_strs_to_tab(ac, av));
    return 0;
}