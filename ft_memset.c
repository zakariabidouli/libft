#include <unistd.h>

void *ft_memset(void *b, int c, size_t len)
{
    int i;
    char *x;

    x = (char *)b;
    i = 0;
    while (i < len)
    {
        x[i] = (char)c;
        i++;
    }
    return (b);
}
#include <stdio.h>
#include <string.h>
int main()
{
    char *s = strdup("hello");

    printf("%s\n", ft_memset((void *)s ,'d' , 40));
    printf("%s",memset((void *)s ,'d' , 40));
    return 0;
}
