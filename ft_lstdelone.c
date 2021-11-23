#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_list {
void *content;
struct s_list *next; } t_list;

t_list *ft_lstnew(void *content)
{
    t_list *lst;

    lst = malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);

	lst->content = content;
	lst->next = 0;
    return lst;
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	
}