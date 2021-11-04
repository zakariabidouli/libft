#include <ctype.h>

int ft_toupper(int c)
{
    ///int i;
    char tmp;

    tmp = (char) c;
    //i = 0;
    if ( tmp >= 'a' && tmp <= 'z')
    {
        tmp -= 32;
    }
    return (tmp);
}
#include <stdio.h>
#include <string.h>
int main ()
{
    printf ("%c", ft_toupper('a'));
    return 0;
}
