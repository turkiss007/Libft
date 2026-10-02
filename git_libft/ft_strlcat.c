#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dst_original_size;

    dst_original_size = (size_t)ft_strlen(dst);
    if (size < dst_original_size)
    {
        return (size + ft_strlen((char *)src));
    }
    i = dst_original_size;
    j = 0;
    while (i < size)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dst_original_size + ft_strlen((char *)src));
}