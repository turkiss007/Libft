#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <unistd.h>
#include <limits.h>

//static void ft_toupper2(unsigned int i, char *c)
//{
//	i = 0;
//	if (*c >= 'a' && *c <= 'z')
//		*c -= 32;
//	printf("%c", *c);
//}

int	main(void)
{
	t_list *node = ft_lstnew("Hola");
	printf("%s\n", (char *)node->content);
}
