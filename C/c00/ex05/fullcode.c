/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 17:29:56 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/28 17:42:07 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0' - 1;
	while (i < '7')
	{
		i++;
		j = i;
		while(j < '8')
		{
			j++;
			k = j;
			while(k < '9')
			{
				k++;
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i != '7')
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
