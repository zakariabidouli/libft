
#include "libft.h"

// void del(void *p)
// {
// 	free( ((t_list *)p)->content);
// 	((t_list *)p)->content = NULL;
// }

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*it;

	it = lst;
	if (lst == NULL || del == NULL)
		return ;
	while (it != NULL)  
	{
		del ((void *)it);
		it = it->next;
	}
	return ;
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


// 	ft_lstdelone(list, (*del));

// 	i = list;
// 	while (i != NULL)
// 	{
//     	printf("[%s]\n", i->content);
// 		i = i->next;
// 	}

// 	return (0);
// }

// void	ft_lstdelone(t_list *lst, void (*del)(void *))
// {
// 	if (lst == NULL || del == NULL)
// 		return ;
// 	del(lst->content);
// 	free(lst);
// }