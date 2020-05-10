#include "libft.h"

void    ft_putstrendl(char *str)
{
    if (!str)
        return ;
    while (*str)
        write(1, str++, 1);
	write(1, "\n", 1);
}
