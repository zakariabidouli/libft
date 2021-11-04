#include <string.h>
#include <stdio.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *tmp;
    char *tmp2;
    int i;

    tmp = (char *)s1;
    tmp2 = (char *)s2;
    i = 0;
    while (tmp[i] == tmp2[i] && i < n)
        i++;
    return (tmp[i] - tmp2[i]);
}

int main()
{
    char str1[15] = "01334";
    char str2[15] = "01x34";

    printf ("%d\n", ft_memcmp(str1, str2, 10));
    printf ("%d\n", memcmp(str1, str2, 10));
    return 0;
}
