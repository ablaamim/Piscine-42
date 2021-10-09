/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:14:38 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/07 14:25:50 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
}

void	ft_putnbr_array(int *tab, int size)
{
	ft_putchar('[');
	ft_putchar(' ');
	while (size-- > 0)
	{
		ft_putnbr(*tab++);
		ft_putchar(' ');
	}
	ft_putchar(']');
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	tab = (int *)malloc((max - min) * sizeof(int));
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (i);
}

int	main(void)
{
	int *tab;

	ft_putnbr_array(tab, ft_ultimate_range(&tab, 20, 50));
	ft_putchar('\n');
	return (0);
}
