#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <unistd.h>

int	main(void)
{
	const char s1[] = "-12300";

	printf("%d\n", atoi(s1));
	printf("%d\n", ft_atoi(s1));
}