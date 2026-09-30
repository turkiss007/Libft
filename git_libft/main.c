#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	int	result1;
	int	result2;
	char	c1;
	char	c2;
	char	dst[5];

	//Pruebas strlcpy
	result1 = (int)ft_strlcpy(dst, "1234", 5);
	printf("%d\n", result1);
	printf("%s\n", dst);
	result2 = (int)strlcpy(dst, "1234", 5);
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