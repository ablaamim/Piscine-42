/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 06:47:02 by ablaamim          #+#    #+#             */
/*   Updated: 2021/09/25 07:38:27 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void	print_matr(int line, int col, int max_l, int max_col)
{
	if (line == 0)
	{
		if (col == 0)
			ft_putchar('A');
		else if (col == max_col)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (line == max_l)
	{
		if (col == 0)
			ft_putchar('C');
		else if (col == max_col)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (col == 0 || col == max_col)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush04(int x, int y)
{
	int	line;
	int	col;

	if (x < 0 || y < 0)
		return ;
	line = 0;
	while (line < y)
	{
		col = 0;
		while (col < x)
		{
			print_matr(line, col, y - 1, x - 1);
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}

int	main(int ac, char **av)
{
	if (ac ==3)
		rush04(atoi(av[1]), atoi(av[2]));
	return EXIT_SUCCESS;
}
