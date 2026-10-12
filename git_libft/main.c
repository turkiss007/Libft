#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <unistd.h>
#include <limits.h>

int	main(void)
{
	char *s1 = "abbcacmy favorite animal is the frogaabcaacb";
	char *result = ft_strtrim(s1, "");
	printf("%s\n", result);
}
