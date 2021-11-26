// #include <ctype.h>
#include "libft.h"

int ft_tolower(int c)
{
    ///int i;
    char tmp;

    tmp = (char) c;
    //i = 0;
    if ( tmp >= 'A' && tmp <= 'Z')
    {
        tmp += 32;
    }
    return (tmp);
}
// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//     printf ("%c", ft_tolower('A'));
//     return 0;
// }
