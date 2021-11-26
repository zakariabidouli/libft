#include "libft.h"

// void del(void *s)
// {
// 	free( ((t_list *)s)->content);
// 	((t_list *)s)->content = NULL;
// }

void *f(void *p)
{
	int i;

	i = 0;
	while(((char *)p)[i] )
	{
		if (((char *)p)[i] >= 'a' && ((char *)p)[i] >= 'z' )
			((char *)p)[i] += 32;
		i++;
	}
	return p;
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*it;
	// t_list	*it2;
	t_list	*ptr;

	ptr = NULL;
	it = lst;
	while(it != 0)
	{
		ft_lstadd_back(&ptr, ft_lstnew(strdup(f(it->content))));
		if (ptr == NULL)
			return (NULL);
		if (del == NULL)
			del ((void *)it->content);
		it = it->next;
	}
	return (ptr);
}

int main ()
{
	t_list *list;
	t_list *i;
	t_list *p;
	
	list = NULL;
	p = NULL; //first node

	ft_lstadd_front(&list, ft_lstnew(strdup("A")));
	ft_lstadd_front(&list, ft_lstnew(strdup("B")));
	ft_lstadd_front(&list, ft_lstnew(strdup("C")));
	ft_lstadd_front(&list, ft_lstnew(strdup("D")));
	ft_lstadd_front(&list, ft_lstnew(strdup("Eklfajjlk")));

	i = list;
	while (i != NULL)
	{
    	printf("[%s]\n", i->content);
		i = i->next;
	}
	t_list *new_list = ft_lstmap(list, *f, *del);
	p = new_list;
	while (p != NULL)
	{
    	printf("[%s]\n", p->content);
		p = p->next;
	}
	i = NULL;
	i = list;
	while (i != NULL)
	{
    	printf("[%s]\n", i->content);
		i = i->next;
	}
	return (0);
}