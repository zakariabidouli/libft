#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int i;

	i = -1;
	while(i++)
	{
		if (lst->next != NULL)
			break;
	}
	return (i);
}



int main ()
{
	t_list *list;
	// t_list *new_node;
	int x;

	ft_lstadd_front(&list, ft_lstnew(strdup("A")));
	ft_lstadd_front(&list, ft_lstnew(strdup("B")));
	ft_lstadd_front(&list, ft_lstnew(strdup("C")));
	ft_lstadd_front(&list, ft_lstnew(strdup("D")));
	ft_lstadd_front(&list, ft_lstnew(strdup("E")));
	
	// list = ft_lstnew(strdup("hi"));
	// new_node = ft_lstnew(strdup("hi"));

	x = ft_lstsize(list);

    printf("[%d]\n", x); 
	return (0);
}