#include "../include/libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *next;

    next = NULL;
    while (*lst)
    {
        next = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = next;
    }
    *lst = NULL;
}
