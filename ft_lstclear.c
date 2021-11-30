#include "libft.h"
// void del(void *it)
// {
// 	free((t_list*)it);
// 	((t_list *)it)->content = NULL;
// 	((t_list *)it)->next = NULL;
// }

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*it;
	t_list	*ptr;

	it =  *lst;
	while (it != NULL)
	{
		ptr = it;
		del ((void*)it);
		it =  ptr->next;
	}
	// free ();
	return;
}

// int main ()
// {
// 	t_list *list;
// 	t_list *new_node;
// 	t_list *i;
	
// 	list = NULL; //first node


// 	ft_lstadd_front(&list, ft_lstnew(strdup("A")));
// 	ft_lstadd_front(&list, ft_lstnew(strdup("B")));
// 	ft_lstadd_front(&list, ft_lstnew(strdup("C")));
// 	ft_lstadd_front(&list, ft_lstnew(strdup("D")));
// 	ft_lstadd_front(&list, ft_lstnew(strdup("E")));

// 	i = list;
// 	while (i != NULL)
// 	{
//     	printf("[%s]\n", i->content);
// 		i = i->next;
// 	}
// 	ft_lstclear(&list, (*del));

// 	i = list;
// 	while (i != NULL)
// 	{
//     	printf("[%s]\n", i->content);
// 		i = i->next;
// 	}

// 	return (0);
// }

