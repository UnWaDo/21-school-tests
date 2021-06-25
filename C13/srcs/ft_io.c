#include "ft_io.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

static void	ft_putnbr_output(int nbr)
{
	int	r;

	r = -(nbr % 10);
	nbr /= 10;
	if (nbr)
		ft_putnbr_output(nbr);
	ft_putchar('0' + r);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 0)
		nbr = - nbr;
	else
		ft_putchar('-');
	ft_putnbr_output(nbr);
}

void	ft_tabulate(int n, char *sep)
{
	int	i;

	if (!sep)
		sep = "\t";
	i = 0;
	while (i < n)
	{
		ft_putstr(sep);
		i++;
	}
}