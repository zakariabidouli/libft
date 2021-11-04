#include <stdlib.h>
int	*ft_range(int	min, int	max)
{
	int	i;
	int	*p;
	int limit;

	limit = max - min;
	if (limit <= 0)
		return (NULL);
	p = malloc(sizeof(int) * limit);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < limit)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
#include <stdio.h>
int main()
{   
    int *p;
    int i = 0;
    p = ft_range (0, 0);
    while (i < (0 - 0))
    {
        printf("%d ", p[i]);
        i++;
    }
    return 0;
}