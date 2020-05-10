#include "libft.h"

void    *ft_zemalloc(size_t size)
{
    unsigned char *ptr;
    size_t i;

    i = 0;
    if ((ptr = malloc(size)))
        while (i < size)
            ptr[i++] = 0;
    return ((void *)ptr);
}