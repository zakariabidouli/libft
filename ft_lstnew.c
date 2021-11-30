
#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *lst;

    lst = malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);

	lst->content = content;
	lst->next = 0;
    return (lst);
}

// #include <stdio.h>
// #define P(x) printf("[%s]\n", x);

// int main()
// {
//     struct s_list *lst;
// 	lst = ft_lstnew("ello");
//     P(lst->content);
// }