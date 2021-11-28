#include "libft.h"

// int search(const char  *str, char c)
// {
// 	int end;

// 	end = 0;
// 	while(str[end] && str[end] != c)
// 	{
// 		end++; 
// 	}
// 	return (end);
// }


// int checkifsepa(char *str, int i, char c)
// {
// 	if (str[i - 1] != c && str[i - 1] != '\0' && str[i + 1] != c && str[i + 1] != '\0' && str[i] == c )
// 		return (1);
// 	return (0);
// }

// int wordcount(char *str, char c)
// {
// 	int i;
// 	int j;
// 	int words;

// 	words = 0;
// 	i = 0;
// 	while (str[i])
// 	{
// 		j = search(str, c);
// 		while (words && i == j + 1)
// 		{	
// 			if (checkifsepa(str, i, c))
// 				words++;
// 			else
// 				i++;
// 		}
// 		i++;
// 	}
// 	return (words);
// }

// char *sptwrd(char *str, char   c)
// {
// 	int i;
// 	int j;
// 	char *p;

// 	i = search (str,c);
// 	p = malloc(sizeof (char) * (i + 1)); 
// 	if (p == NULL)
// 		return(NULL);
// 	j = 0;
// 	while (str[j] && j < i)
// 	{
// 		p[j] = str[j];
// 		j++;
// 	}
// 	p[j] = '\0';
// 	return (p);
// }

// char **ft_split(char const *s, char c)
// {
// 	int i;
// 	char **ptr;


// 	ptr = malloc(sizeof(char *) * (wordcount((char *)s, c)));
// 	*ptr = malloc(sizeof (char) * search((char *)s, c) * (wordcount((char *)s, c)));
// 	if (ptr == NULL || *ptr == NULL)
// 		return(NULL);
// 	i = 0;
// 	while(i < wordcount((char *)s, c))
// 	{    
// 		ptr[i] =malloc(sizeof (char) * (search(s, c)));
// 		i++;
// 	}
// 	while (ptr[i] && i < wordcount((char *)s, c))
// 	{
// 		ptr[i] = sptwrd((char *)s, c);
// 		i++;
// 	}
// 	return (ptr);
// }


// int main()
// {
// 	//char *p = sptwrd("ABCDEFddfgdf",'D');
// 	// char **ptr = ft_split("ABCDEFddfgdf",'D');
// 	int count = wordcount(" AB             CB            DB ",' ');
// 	printf ("[%d]\n", count);
	
// 	return 0;
// }


static char			**ft_malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static unsigned int	ft_get_nb_strs(char const *s, char c)
{
	unsigned int	i;
	unsigned int	nb_strs;

	if (!s[0])
		return (0);
	i = 0;
	nb_strs = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nb_strs++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		nb_strs++;
	return (nb_strs);
}

static void			ft_get_next_str(char **next_str, unsigned int *next_str_len,
					char c)
{
	unsigned int i;

	*next_str += *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*next_str_len)++;
		i++;
	}
}

char				**ft_split(char const *s, char c)
{
	char			**tab;
	char			*next_str;
	unsigned int	next_str_len;
	unsigned int	nb_strs;
	unsigned int	i;

	if (!s)
		return (NULL);
	nb_strs = ft_get_nb_strs(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (nb_strs + 1))))
		return (NULL);
	i = 0;
	next_str = (char *)s;
	next_str_len = 0;
	while (i < nb_strs)
	{
		ft_get_next_str(&next_str, &next_str_len, c);
		if (!(tab[i] = (char *)malloc(sizeof(char) * (next_str_len + 1))))
			return (ft_malloc_error(tab));
		ft_strlcpy(tab[i], next_str, next_str_len + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
