#include "libft.h"

// void f(void *p)
// {
// 	int i;

// 	i = 0;
// 	while(((char *)p)[i] )
// 	{
// 		if (((char *)p)[i] >= 'a' && ((char *)p)[i] >= 'z' )
// 		((char *)p)[i] += 32;
// 		i++;
// 	}
// }

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*it;

	it = lst;
	while(it != 0)
	{
		f(it->content);
		it = it->next;
	}
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
// 	ft_lstadd_front(&list, ft_lstnew(strdup("Eklfajjlk")));

// 	i = list;
// 	// while (i != NULL)
// 	// {
//     // 	printf("[%s]\n", i->content);
// 	// 	i = i->next;
// 	// }
// 	ft_lstiter(list, (*f));

// 	i = list;
// 	while (i != NULL)
// 	{
//     	printf("[%s]\n", i->content);
// 		i = i->next;
// 	}

// 	return (0);
// }
