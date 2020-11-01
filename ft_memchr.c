#include "libft.h"

void *ft_memchr(const void *src, int symbol, size_t size)
{
    unsigned char *ft_src;
    size_t i;
    
    ft_src = (unsigned char *)src;
    i = 0;
    while (i < size - 1)
    {
        //*ft_src++;
        if (*ft_src++ == symbol)
        {
            return (ft_src - 1);
        }
        i++;
    }
    return (NULL);
}
