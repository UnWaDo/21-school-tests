#include <stdio.h>
#include "../../ex02/ft_abs.h"
#include "../../ex02/ft_abs.h"

int	main(void)
{
	printf("%d\n", ABS(42));
	printf("%d\n", ABS(-42));
	printf("%d\n", 84 + (ABS(-42)));
	printf("%d\n", ABS(-42) - 84);
	printf("%d\n", 2 * ABS(42 - 84));
	return (0);
}
