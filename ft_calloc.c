#include "libft.h"

// void    *ft_calloc(size_t count, size_t size)
// {
//     int     i;
//     char    *ptr;
//     int     len;

//     len = (1 + count) * size;

//     i = 0;
//     ptr = malloc (len);
//     if (ptr == NULL)
//         return (NULL);
//     while (i < len)
//     {
//         ptr[i] = 0;
//         i++;
//     }
//     return (ptr); 
// }

// #include <stdio.h>
//     int main() {
//         int i,  sum = 0;

//     char *p;    

//         p = ft_calloc(10, sizeof(int));

//         for (size_t i = 0; i < 10; i++)
//         {
//            printf("[%c]\n", p[i]);
//         }
        

//         return 0;            
//     }
void		*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (!(p = malloc(count * size)))
		return (NULL);
	ft_bzero(p, (count * size));
	return (p);
}