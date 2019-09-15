#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

void	ft_putnbr(int nb)
{
	long number;

	number = nb;
	if (number >= 0 && number < 10)
	{
		ft_putchar(number);
	}
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
	{
		ft_putchar(number + '0');
	}
}

int	main(void)
{
	ft_putnbr(12345);
	ft_putchar('\n');
	ft_putnbr(-122);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	return (0);
}
