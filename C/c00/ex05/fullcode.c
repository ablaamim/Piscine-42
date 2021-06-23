/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 17:29:56 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/23 16:00:46 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char tab[3];

	tab[0] = '0' - 1;
	while (tab[0] < '7')
	{
		tab[0]++;
		tab[1] = tab[0];
		while(tab[1] < '8')
		{
			tab[1]++;
			tab[2] = tab[1];
			while(tab[2] < '9')
			{
				tab[2]++;
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

int main(void)
{
	write(1, "-----\n", 6);
	write(1, "single check :\n", 16);
	ft_print_comb();
		ft_putchar('\n');
	write(1, "-----\n", 6);
	write(1, "Multiple check :\n", 16);
		ft_putchar('\n');
	ft_print_comb();
		write(1, ", ", 2);
	ft_print_comb();
		ft_putchar('\n');
	write(1, "-----\n", 6);
	return (0);
}
