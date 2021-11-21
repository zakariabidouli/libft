#include <unistd.h>
void ft_putchar_fd(char c, int fd)
{
	write(fd, 1, &c);
}