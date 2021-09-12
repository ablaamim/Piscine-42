/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:53:26 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/12 18:09:51 by alaamimi         ###   ########.fr       */
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
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = (long) nb;
	if(nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if(nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + 48);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int cmp1;
	int cmp2;
	int tmp;

	cmp1 = 0;
	while(cmp1 < size)
	{
		cmp2 = cmp1 + 1;
		while(cmp2 < size)
		{
			if (tab[cmp2] < tab[cmp1])
			{
				tmp = tab[cmp1];
				tab[cmp1] = tab[cmp2];
				tab[cmp2] = tmp;
			}
			cmp2++;
		}
		cmp1++;
	}
}

int	main(void)
{
	int	tab[12]= {-1, 9, 4, 5, 42, 1, 0, 1337, 2, 6, 101, -42};
	char	str[] = "-----------------------------------------------------------------\n";
	char	str1[] = "Sorted table of ints : ";
	char	str2[] = "Table of ints before sort : ";
	int	i;
	int index;

	index = 0;
	ft_putstr(str);
	ft_putstr(str2);
	ft_putchar('[');
	while (i < 11)
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putnbr(11);
	ft_putchar(']');
	ft_putchar('\n');
	i = 0;
	ft_putstr(str);
	ft_putstr(str1);
	ft_sort_int_tab(tab, 12);
	ft_putchar('[');
	while (i < 11)
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putnbr(tab[11]);
	ft_putchar(']');
	ft_putchar('\n');
	ft_putstr(str);
	return(EXIT_SUCCESS);
}
