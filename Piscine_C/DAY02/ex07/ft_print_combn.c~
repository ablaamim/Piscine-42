#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int col[9];
	int i;

	i = -1;
	while (++i < 9)
	{
		if (i < n)
		col[i] = i;
		else
		col[i] = -1;
	}   
	if (n == 1)
	col[0] = 1;
	while (1)
	{
		i = -1;
		while (++i < 9 && col[i] >= 0)
			ft_putchar(col[i] + '0');
				if (col[0] < 10 - n)
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					if (col[0] ==  10 - n)
						return;
						col[n - 1]++;
						i = n - 1;
						if (col[n - 1] == 10)
							while (--i > -1)
								{
									if (col [i] < 10 - n + i)
										{
											col[i]++;
											while (i < n - 1)
											{
												col[i + 1] = col[i] + 1;
												i++;
											}
											break;
										}
								}
	}
}
int main()
{
    ft_print_combn(2);
}
