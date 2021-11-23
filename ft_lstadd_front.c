
#include "libft.h"


// t_list *ft_lstnew(void *content)
// {
//     t_list *lst;

//     lst = malloc(sizeof(t_list));
// 	if (lst == NULL)
// 		return (NULL);

// 	lst->content = content;
// 	lst->next = 0;
//     return lst;
// }

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *listmp;

	if (*lst == NULL)
		new = *lst;
	listmp = *lst;
	*lst = new;
	new->next = listmp;
}

// int main ()
// {
// 	t_list *list;
// 	t_list *new_node;
	
// 	list = NULL; //first node

// 	ft_lstadd_back(&list, ft_lstnew(strdup("A")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("B")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("C")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("D")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("E")));

// 	ft_lstadd_front(&list, ft_lstnew(strdup("X")));


// 	t_list *i;

// 	i = list;
// 	while (i != NULL)
// 	{
//     	printf("[%s]\n", i->content); 
// 		i = i->next;
// 	}

// 	return (0);
// }