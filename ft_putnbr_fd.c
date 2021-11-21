#include<unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int	fd)
{
	unsigned int	nbr;

	if (nb == 0)
	{
		ft_putchar_fd ('0', fd);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd ('-', fd);
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr > 9)
	{
		ft_putnbr_fd (nbr / 10, fd);
		ft_putnbr_fd (nbr % 10, fd);
	}
	else
		ft_putchar_fd (nbr + '0', fd);
}