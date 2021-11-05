#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    int i;
    i = 0;
    char *ptr;
    ptr = malloc ((1 + count) * size);
    if (ptr == NULL)
        return (0);
    while (ptr[i])
    {
        ptr[i] = 0;
        i++;
    }
    return(ptr); 
}
#include <stdio.h>
    int main() {
        int i, * p, sum = 0;
        p = ft_calloc(10, sizeof(int));


        printf("%s", &p);
        return 0;
    }