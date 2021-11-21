#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
	int i;

	i = -1;
	while(s[i++])
		write(fd, 1, s[i]);
	write(1, 1, '\n');
}