#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

void	ft_print_reverse_alphabet()
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
