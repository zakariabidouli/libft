#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*it;

	it = lst;
	while(it->next != NULL)
			break;	
	return(lst);
}

// int main ()
// {
// 	t_list *list;
// 	// t_list *new_node;
// 	// int x;

// 	ft_lstadd_front(&list, ft_lstnew(strdup("A")));
// 	ft_lstadd_front(&list, ft_lstnew(strdup("B")));
// 	ft_lstadd_front(&list, ft_lstnew(strdup("C")));
// 	ft_lstadd_front(&list, ft_lstnew(strdup("D")));
// 	ft_lstadd_front(&list, ft_lstnew(strdup("lakher")));
	
// 	// list = ft_lstnew(strdup("hi"));
// 	// new_node = ft_lstnew(strdup("hi"));

// 	list = ft_lstlast(list);

//     printf("[%s]\n", list->content); 
// 	return (0);
// }