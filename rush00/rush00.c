/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 06:47:02 by ablaamim          #+#    #+#             */
/*   Updated: 2021/09/25 22:59:04 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}


int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while ((*str == 32) || (*str >= 7 && *str <=13))
		*str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-')
		*str++;
	while (*str >= 48 && *str <= 57)
	{
		num = num * 10 + *str - 48;
		*str++;
	}
	return (sign * num);
}

void	print_matrix(int line, int col, int max_l, int max_col)
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

	if (x <= 0 || y <= 0)
		return ;
	line = 0;
	while (line < y)
	{
		col = 0;
		while (col < x)
		{
			print_matrix(line, col, y - 1, x - 1);
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		rush04(ft_atoi(av[1]), ft_atoi(av[2]));
	return (EXIT_SUCCESS);
}
