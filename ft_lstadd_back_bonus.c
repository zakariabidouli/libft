#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	// t_list *list;
	t_list *it ;

	if (lst == NULL || new == NULL)
		return ;
	else if (*lst == NULL) // empty
		*lst = new;
	else
	{
		it = *lst;
		while (it->next != NULL)
			it = it->next;
		it->next = new;
	}
	return;
	
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