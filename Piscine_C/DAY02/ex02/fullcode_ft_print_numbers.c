#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char nb;

	nb = '0';
	while (nb <= '9')
	{
		ft_putchar(nb);
		nb++;
	}
}

int	main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
	return (0);
}

