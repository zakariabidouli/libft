#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;
	size_t			i;
	if (ft_strlen(dest) == 0 && ft_strlen(src) == 0)
		return ("");
	if (!dest && !src)
		return (0);
	new_dest = dest;
	new_src = (unsigned char *)src;
	i = 0;
	while (i++ < n)
		*new_dest++ = *new_src++;
	return (dest);
}


#include <stdio.h>

// int main ()
// {
// 	int array [] = { 54, 85, 20, 63, 21 };
//     int * copy = NULL;
//     int length = sizeof( int ) * 5;
       
//     /* Memory allocation and copy */
//     copy = (int *) malloc( length );
//     ft_memcpy( copy, array, length );
        
//     /* Display the copied values */
//     for( length=0; length<5; length++ ) 
//         printf( "%d ", copy[ length ] );
//     printf( "\n" );
//     free( copy );
//     return 0;
// }
// int main()
// {
// 	printf("%s",memcpy("","",4));
// 	return 0;
// }