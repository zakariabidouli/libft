
#include <stdlib.h>
#include <stdio.h>

struct s_list
{
    void *content;
    struct s_list *next;
};

struct s_human
{
    char *name;
    int age;
};


typedef struct s_list t_list;

typedef unsigned long ull;


t_list *ft_lstnew(void *content)
{
    int             x;
    ull             b;
    unsigned int    a;

    struct s_list *lst;

    lst = malloc(sizeof(lst));

    


    return lst;
}

#define MALLOC(ptr) ptr = malloc(sizeof((ptr)))

int main()
{
    struct s_list *lst;
    MALLOC(lst);
    printf("%lu, %lu, %lu\n", sizeof(*lst), sizeof(struct s_list), sizeof(t_list));

}