#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putline(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}

void	ft_putnbr(int n)
{
	int		r;
	char	c;

	r = n % 10;
	if (n / 10)
		ft_putnbr(n / 10);
	c = '0' + r;
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putline(par[i].str);
		ft_putnbr(par[i].size);
		ft_putline("");
		ft_putline(par[i].copy);
		i++;
	}
}
