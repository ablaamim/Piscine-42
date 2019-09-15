#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char tab[3];

	tab[0] = '0' - 1;
	while (tab[0]++ < '7')
	{
		tab[1] = tab[0];
		while (tab[1]++ < '8')
		{
			tab[2] = tab[1];
			while (tab[2]++ < '9')
			{
				ft_putchar(tab[0]);
				ft_putchar(tab[1]);
				ft_putchar(tab[2]);
				if (tab[0] != '7')
				{
				ft_putchar(',');
				ft_putchar(' ');
				}
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
