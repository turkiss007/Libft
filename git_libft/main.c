#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	char	*s = "hola que tal";

	//Pruebas strrchr
	char *rr1 = ft_strrchr(s, 'a');
	char *rr2 = strrchr(s, 'a');
	if (rr1)
		printf("ft_strrchr: %s\n", rr1);
	else
		printf("ft_strrchr: NULL\n");

	if (rr2)
		printf("strrchr: %s\n", rr2);
	else
		printf("strrchr: NULL\n");

	//Pruebas strchr
	char *r1 = ft_strchr(s, 'a');
	char *r2 = strchr(s, 'a');
	if (r1)
		printf("ft_strchr: %s\n", r1);
	else
		printf("ft_strchr: NULL\n");

	if (r2)
		printf("strchr: %s\n", r2);
	else
		printf("strchr: NULL\n");

	int	result1;
	int	result2;
	char	c1;
	char	c2;
	char	dst[15];

	//Pruebas strlcpy
	result1 = (int)ft_strlcpy(dst, "1234", 5);
	printf("%d\n", result1);
	printf("%s\n", dst);
	result2 = (int)strlcpy(dst, "1234", 5);
	printf("%d\n", result2);
	printf("%s\n", dst);

	//Pruebas strlcat
	result1 = (int)ft_strlcat(dst, "56789", 15);
	printf("%d\n", result1);
	printf("%s\n", dst);
	(int)ft_strlcpy(dst, "1234", 5);
	result2 = (int)strlcat(dst, "56789", 15);
	printf("%d\n", result2);
	printf("%s\n", dst);

	//Pruebas isprint
	result1 = isprint('3');
	result2 = ft_isprint('3');
	printf("%d\n", result1);
	printf("%d\n", result2);

	//Pruebas isascii
	result1 = isascii('q');
	result2 = ft_isascii('q');
	printf("%d\n", result1);
	printf("%d\n", result2);

	//Pruebas isalnum
	result1 = isalnum('a');
	result2 = ft_isalnum('a');
	printf("%d\n", result1);
	printf("%d\n", result2);

	//Pruebas isdigit
	result1 = isdigit('2');
	result2 = ft_isdigit('2');
	printf("%d\n", result1);
	printf("%d\n", result2);

	//Pruebas isalpha
	result1 = isalpha('<');
	result2 = ft_isalpha('<');
	printf("%d\n", result1);
	printf("%d\n", result2);

	//Pruebas tolower
	c1 = tolower('A');
	c2 = ft_tolower('A');
	printf("%c\n", c1);
	printf("%c\n", c2);

	//Pruebas toupper
	c1 = toupper('a');
	c2 = ft_toupper('a');
	printf("%c\n", c1);
	printf("%c\n", c2);

	//Pruebas strlen
	result1 = ft_strlen("1234");
	result2 = strlen("1234");
	printf("%d\n", result1);
	printf("%d\n", result2);
	
}