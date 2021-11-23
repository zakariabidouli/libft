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

t_list *ft_lstlast(t_list *lst)
{
	int i;

	i = -1;
	while(i++)
	{
		if (lst->next == NULL)
			break;	
	}
	return(lst);
}

int main ()
{
	t_list *list;
	t_list *new_node;
	
	list = ft_lstnew(strdup(""));
	new_node = ft_lstnew(strdup("hi"));

	ft_lstlast(list);

    printf("[%s]\n", list->content); 
	return (0);
}