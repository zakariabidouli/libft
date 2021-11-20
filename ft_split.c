#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int search(const char  *str, char c)
{
	int end;

	end = 0;
	while(str[end] && str[end] != c)
	{
		end++; 
	}
	return (end);
}


int checkifsepa(char *str, int i, char c)
{
	if (str[i - 1] != c && str[i - 1] != '\0' && str[i + 1] != c && str[i + 1] != '\0' && str[i] == c )
		return (1);
	return (0);
}

int wordcount(char *str, char c)
{
	int i;
	int j;
	int words;

	words = 0;
	i = 0;
	while (str[i])
	{
		j = search(str, c);
		while (words && i == j + 1)
		{	
			if (checkifsepa(str, i, c))
				words++;
			else
				i++;
		}
		i++;
	}
	return (words);
}

char *sptwrd(char *str, char   c)
{
	int i;
	int j;
	char *p;

	i = search (str,c);
	p = malloc(sizeof (char) * (i + 1)); 
	if (p == NULL)
		return(NULL);
	j = 0;
	while (str[j] && j < i)
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}

char **ft_split(char const *s, char c)
{
	int i;
	char **ptr;


	ptr = malloc(sizeof(char *) * (wordcount((char *)s, c)));
	*ptr = malloc(sizeof (char) * search((char *)s, c) * (wordcount((char *)s, c)));
	if (ptr == NULL || *ptr == NULL)
		return(NULL);
	i = 0;
	while(i < wordcount((char *)s, c))
	{    
		ptr[i] =malloc(sizeof (char) * (search(s, c)));
		i++;
	}
	while (ptr[i] && i < wordcount((char *)s, c))
	{
		ptr[i] = sptwrd((char *)s, c);
		i++;
	}
	return (ptr);
}


int main()
{
	//char *p = sptwrd("ABCDEFddfgdf",'D');
	// char **ptr = ft_split("ABCDEFddfgdf",'D');
	int count = wordcount(" AB             CB            DB ",' ');
	printf ("[%d]\n", count);
	
	return 0;
}

/* [ "AB", "DE", "DE"]
*/