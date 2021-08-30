/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:47:25 by alaamimi          #+#    #+#             */
/*   Updated: 2021/04/21 18:40:06 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if(nbr < 0)
	{
		nbr = -nb;
		ft_putchar('-');
	}
	if(nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	if(nbr >= 0 && nbr < 10)
		ft_putchar(nbr + 48);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int cmt;
	int tmp;

	cmt = 0;
	while(cmt < size)
	{
		tmp = tab[cmt];
		tab[cmt] = tab[size - 1];
		tab[size - 1] = tmp;
		cmt++;
		size--;
	}
}

int	main(void)
{
	int tab[10] = {1, 4, 2, 3, 8, 5, 6, 7, 8, 0};
	int cmt;

	cmt = 0;
	ft_rev_int_tab(tab, 10);
	write(1, "-----\n", 6);
		write(1, "rev_int_tab values are : ", 25);
	write(1, "{", 2);
	while(cmt < 10)
	{
		ft_putnbr(tab[cmt]);
		if(cmt < 9)
			write(1, ", ", 2);
		cmt++;
	}
		write(1,"}", 1);
		write(1, "\n", 1);
	write(1, "-----\n", 6);
	return(EXIT_SUCCESS);
}
