#include "../include/libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    if (!lst)
        return (0x0);
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}
