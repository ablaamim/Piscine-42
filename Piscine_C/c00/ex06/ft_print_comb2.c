/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 19:41:08 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/28 19:43:57 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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