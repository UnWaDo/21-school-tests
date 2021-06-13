#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);

void	ft_check_function_work(char *buf, int size, char *s1, char *s2)
{
	char	*exp;
	char	*res;

	printf("---------------\n");
	printf("Dest: %s\nSrc: %s\n", s1, s2);
	memset(buf, 0, size);
	strcpy(buf, s1);
	exp = strcat(buf, s2);
	printf("exp:\nDest: %s\nSrc: %s\n", exp, s2);
	memset(buf, 0, size);
	strcpy(buf, s1);
	res = ft_strcat(buf, s2);
	printf("res:\nDest: %s\nSrc: %s\n", res, s2);
	printf("---------------\n");
}

int	main(void)
{
	char	*a;
	char	*b;
	char	*buf;

	buf = malloc(50);
	a = "There is no spoon, Neo";
	b = "Some sort of string";
	ft_check_function_work(buf, 50, a, b);
	a = "";
	b = "Destination string is empty";
	ft_check_function_work(buf, 50, a, b);
	a = "Source string is empty";
	b = "";
	ft_check_function_work(buf, 50, a, b);
	free(buf);
}
