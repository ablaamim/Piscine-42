/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:47:25 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/30 19:12:13 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = (long) nb;
	if(nbr < 0)
	{
		nbr = -nb;
		ft_putchar('-');
	}
	if(nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + 48);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	cmt;
	int	swap;

	cmt = 0;
	while(cmt <= size - 1)
	{
		swap = tab[cmt];
		tab[cmt] = tab[size - 1];
		tab[size - 1] = swap;
		cmt++;
		size--;
	}
}

int	main(void)
{
	int	tab[10] = {1, 4, 2, 3, 8, 5, 6, 7, 8, 9};
	int	cmt;
	char	str[] = "----------------------------------------------------\n";
	char	str1[] = "None-reversed tab : ";
	char	str2[] = "Reversed tab : ";

	cmt = 0;
		ft_putstr(str);
		ft_putstr(str1);
		ft_putchar('{');
	while (cmt < 10)
	{
		ft_putnbr(tab[cmt]);
		if (cmt < 9)
			write(1, ", ", 2);
		cmt++;
	}
		ft_putchar('}');
		ft_putchar('\n');
		ft_putstr(str);
		ft_putstr(str2);

	ft_rev_int_tab(tab, 10);
	write(1, "{", 1);
	cmt = 0;
	while(cmt < 10)
	{
		ft_putnbr(tab[cmt]);
		if(cmt < 9)
			write(1, ", ", 2);
		cmt++;
	}
		write(1,"}", 1);
		write(1, "\n", 1);
		ft_putstr(str);
	return(EXIT_SUCCESS);
}
