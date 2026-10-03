#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	//Pruebas strnstr
	char *big = ((void*)0);
	char *little = "Fake";
	char *ptr1;
	char *ptr2;

    ptr1 = strnstr(big, little, 3);
	printf("strnstr: %s\n", ptr1);

	ptr2 = ft_strnstr(big, little, 3);
	printf("ft_strnstr: %s\n", ptr2);

	// Pruebas strncmp
	int	w;
	w = ft_strncmp("ab", "abcdef", 3);
	printf("%d\n", w);
	w = strncmp("ab", "abcdef", 3);
	printf("%d\n", w);


	char	*s = "123456t789";
	//Pruebas strrchr

	char *rr1 = ft_strrchr(s, 't' + 512);
	char *rr2 = strrchr(s, 't' + 512);
	if (rr1)
		printf("ft_strrchr: %s\n", rr1);
	else
		printf("ft_strrchr: NULL\n");

	if (rr2)
		printf("strrchr: %s\n", rr2);
	else
		printf("strrchr: NULL\n");

	//Pruebas strchr
	char *r1 = ft_strchr(s, 't' + 512);
	char *r2 = strchr(s, 't' + 512);
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
	char	dst[1];

	//Pruebas strlcpy
	result1 = (int)ft_strlcpy(dst, "A", -1);
	printf("ft_strlcpy: %d\n", result1);
	printf("ft_strlcpy: %s\n", dst);
	result2 = (int)strlcpy(dst, "A", -1);
	printf("strlcpy: %d\n", result2);
	printf("strlcpy: %s\n", dst);

	//Pruebas strlcat
	//TEST PACO
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
 	char buff1[0xF00] = "";
 	char buff2[0xF00] = "";
 	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 1;
 
 	strlcat(buff1, str, -1);
 	ft_strlcat(buff2, str, -1);
	printf("paco strlcat: %s\n", buff1);
	printf("paco ft_strlcat: %s\n", buff2);

	//Pruebas isprint
	result1 = isprint('3');
	result2 = ft_isprint('3');
	printf("%d\n", result1);
	printf("%d\n", result2);

	//Pruebas isascii
	result1 = isascii(0);
	result2 = ft_isascii(0);
	printf("ft_isascii:%d\n", result1);
	printf("isascii:%d\n", result2);

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