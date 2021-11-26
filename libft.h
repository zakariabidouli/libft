
#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int ft_atoi(const char *str);
void *ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t count, size_t size);
char *ft_strcat(char *dest, char *src);
t_list *ft_lstnew(void *content);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstadd_front(t_list **lst, t_list *new);
t_list *ft_lstlast(t_list *lst);
int ft_lstsize(t_list *lst);
void    *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void * ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int	fd);
void ft_putstr_fd(char *s, int fd);
char    *ft_strchr(const char *s, int c);
char	*ft_strdup(char	*src);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strcat(char	*dest, char	*src);
char	*ft_strjoin(int	size, char	**strs, char	*sep);
unsigned int	ft_strlcat(char	* restrict dest, char	*restrict src, size_t	dstsize);
size_t	ft_strlcpy(char	*restrict dest, char	*restrict src, size_t	dstsize);
int	ft_strlen(char	*str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
int search(const char  *set, char c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);







#endif