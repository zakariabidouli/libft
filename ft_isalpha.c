#include "libft.h"
int	isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return(1);
	return (0);
}