#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int	main(void)
{
	char	*res;
	char	*exp;

	exp = "This string is not editable";
	res = ft_strdup(exp);
	printf("Exp: %s\nRes: %s\n", exp, res);
	res[17] = 'w';
	printf("Res (mod): %s\n", res);
	free(res);
	return (0);
}
