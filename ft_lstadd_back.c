#include <stdio.h>
#include <stdlib.h>

typedef struct s_list {
void *content;
struct s_list *next; } t_list;


void ft_lstadd_back(t_list **lst, t_list *new)
{
	// t_list *list;
	t_list *it ;

	if (*lst == NULL) // empty
		*lst = new;
	else
	{
		it = *lst;
		while (it->next != NULL)
			it = it->next;
		it->next = new;
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


// int main ()
// {
// 	t_list *list;
// 	t_list *new_node;
	
// 	list = ft_lstnew(strdup("hi"));
// 	new_node = ft_lstnew(strdup("hi"));

// 	ft_lstadd_back(&list, new_node);

//     printf("[%s]\n", new_node->next); 
// 	return (0);
// }