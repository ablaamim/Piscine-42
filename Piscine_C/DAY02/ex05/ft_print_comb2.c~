#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

void	ft_print_comb2(void)
{
	int tab[2];

	tab[0] = -1;
	while (++tab[0] <= 98)
	{
		tab[1] = tab[0];
		while (++tab[1] <= 99)
		{
			ft_putchar(tab[0] / 10 + '0');
			ft_putchar(tab[0] % 10 + '0');
			ft_putchar(' ');
			ft_putchar(tab[1] / 10 + '0');
			ft_putchar(tab[1] % 10 + '0');
			if (tab[0] != 98)
			{
			ft_putchar(',');
			ft_putchar(' ');
			}
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
