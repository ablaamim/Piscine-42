#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar(78);
	else
		ft_putchar(80);
}

int	main()
{
	ft_is_negative(42);
	return(EXIT_SUCCESS);
}
