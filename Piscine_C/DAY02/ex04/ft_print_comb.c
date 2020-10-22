#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char tab[3];

	tab[0] = 47;
	while (tab[0]++ < 55)
	{
		tab[1] = tab[0];
		while (tab[1]++ < 56)
		{
			tab[2] = tab[1];
			while (tab[2]++ < 57)
			{
				ft_putchar(tab[0]);
				ft_putchar(tab[1]);
				ft_putchar(tab[2]);
				if (tab[0] != 55)
				{
				ft_putchar(44);
				ft_putchar(32);
				}
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	ft_putchar(10);
	return (0);
}
