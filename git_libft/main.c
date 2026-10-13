#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <unistd.h>
#include <limits.h>

static char ft_toupper2(unsigned int i, char c)
{
	i = 0;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(void)
{
	char *result = ft_strmapi("hola", ft_toupper2);
	printf("%s\n", result);
}
