#include <stdio.h>
#include <stdlib.h>

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

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *list;
	t_list *head ;

	if (*lst == NULL)
		*lst = new;
	else
	{
		head = *lst;
		while (head->next != NULL)
			head = head->next;
		head->next = *lst;
	}
	return;
	
	// list = malloc(sizeof(t_list));
	// if (list == NULL)
		// return ;
	// list->content = new->content;
	// list->next = new ->next;
	// if (head == NULL)
	// {	
	// 	head = new;
	// 	return;
	// }
	// while (head->next != NULL)
	// 	head = head ->next;
	// head->next= new;
}
#include <string.h>

int main ()
{
	t_list *list;
	t_list *new_node;
	
	list = ft_lstnew(strdup("hi"));
	new_node = ft_lstnew(strdup("hi"));

	ft_lstadd_back(&list, new_node);

    printf("[%s]\n", new_node->next); 
	return (0);
}