#include "libft.h"

void    ft_pustr(char *str)
{
    if (!str)
        return ;
    while (*str)
        write(1, str++, 1);
}
