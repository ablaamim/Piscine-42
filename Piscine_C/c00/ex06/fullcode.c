/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 19:27:06 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/28 19:40:15 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int tab[2];

	tab[0] = -1;
	while(tab[0] < 98)
	{
		tab[0]++;
		tab[1] = tab[0];
		while(tab[1] < 99)
		{
			tab[1]++;
			ft_putchar((tab[0] / 10) + 48);
			ft_putchar((tab[0] % 10) + 48);
			ft_putchar(' ');
			ft_putchar((tab[1] / 10) + 48);
			ft_putchar((tab[1] % 10) + 48);
			if(tab[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

int	main(void)
{
	write(1, "-----\n", 6);
	write(1, "Single sheck :", 14);
		ft_putchar('\n');
	ft_print_comb2();
		ft_putchar('\n');
	write(1, "-----\n", 6);
	write(1, "Multiple Check :", 16);
		ft_putchar('\n');
	ft_print_comb2();
		ft_putchar(',');
		ft_putchar(' ');
	ft_print_comb2();
		ft_putchar('\n');
	return(0);
}
