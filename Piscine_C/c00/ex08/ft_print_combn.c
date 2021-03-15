/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:33:14 by alaamimi          #+#    #+#             */
/*   Updated: 2021/03/09 19:20:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	print_array(int *tab, int size)
{
	int	i;
	int	to_print;

	i = -1;
	to_print = 1;
	while (++i < size - 1)
	{
		if (tab[i] >= tab[i + 1])
			to_print = 0;
	}
	if (to_print)
	{
		i = -1;
		while (++i < size)
			ft_putchar(tab[i] + '0');
		if (tab[0] < 10 - size)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		tab[n];

	i = -1;
	if (n <= 0 || n >= 10)
		return ;
	while (++i < n)
		tab[i] = i;
	while (tab[0] <= 10 - n)
	{
		print_array(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i > 0)
		{
			if (tab[i] > 9)
			{
				tab[i] = 0;
				tab[i - 1]++;
			}
			i--;
		}
	}
}
int	main(void)
{
	ft_print_combn(9);
	return (EXIT_SUCCESS);
}
