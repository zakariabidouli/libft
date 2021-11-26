#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
	int i;

	i = -1;
	while(s[i++])
		write(fd, &s[i], 1);
	write(1, "\n", 1);
}