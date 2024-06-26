#include "../include/libft.h"

static size_t ft_intlen(int n)
{
    size_t count;

    count = (n) ? 0 : 1;
    while (n && ++count)
        n = n / 10;
    return (count);
}

char *ft_itoa(int n)
{
    size_t len;
    char *str;
    unsigned int n_tmp;

    n_tmp = (n < 0) ? -(unsigned int)n : (unsigned int)n;
    len = (n < 0) ? ft_intlen(n_tmp) + 1 : ft_intlen(n_tmp);
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    while (len--)
    {
        str[len] = n_tmp % 10 + '0';
        n_tmp /= 10;
    }
    if (n < 0)
        str[0] = '-';
    return (str);
}
