#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen((char *)s);
    
    if (c == '\0')
        return ((char *)s + i);
    i--;
    while (s[i])
    {
        if (s[i] == c)
            return ((char *)s + i);
        i--;
    }
    return (NULL);
}