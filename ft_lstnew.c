
#include <stdlib.h>
#include <stdio.h>


typedef struct s_list {
void *content;
struct s_list *next; } t_list;

t_list *ft_lstnew(void *content)
{
    t_list *lst;

    lst = malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);

	lst->content = content;
	lst->next = 0;
    return lst;
}

#define P(x) printf("[%s]\n", x);

int main()
{
    struct s_list *lst;
	lst = ft_lstnew("ello");
    P(lst->content);
}