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

static void del(void *content)
{
	free(content);
}

int 	main(void)
{
	char **result = ft_split("hello!", ' ');
	int i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
}
//int	main(void)
//{
//	t_list *node = ft_lstnew("Hola esta en posicion 1");
//	//printf("%s\n", (char *)node->content);

//	t_list new;
//	new.content = "primero está en posicion 0";

//	ft_lstadd_front(&node, &new);
//	unsigned int size = ft_lstsize(node);
//	printf("Tamaño de la lista: %d\n", size);

//	t_list back;
//	back.content = "ultimo";
//	back.next = NULL;
//	ft_lstadd_back(&node, &back);

//	t_list *last_node = ft_lstlast(node);
//	printf("Ultimo nodo de la lista: %s\n", (char *)last_node->content);
//	if (last_node->next == NULL)
//		printf("El siguiente es nulo\n");
	
//	ft_lstdelone(node, del);
//	while (node)
//	{
//		printf("Contenido del nodo: %s\n", (char *)node->content);
//		node = node->next;
//	}
//}
