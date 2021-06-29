/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:09:28 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/29 16:53:14 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

	nbr = (long)nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	if (nbr >= 0 && nbr < 10)
		ft_putchar(nbr + 48);
}

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int		a;
	int		b;
	char	str[] = "Values before swap : \n\n";
	char	str1[] = "Values after swap : \n\n";
	char	str2[] = "----------------------\n";
	char	str3[] = "Mem adress : \n\n";

a = 1337;
	b = 42;
	ft_putstr(str2);
	ft_putstr(str);
	ft_putnbr(a);
		ft_putchar(' ');
	ft_putnbr(b);
		ft_putchar('\n');
	ft_putstr(str2);
	ft_swap(&a, &b);
	ft_putstr(str1);
	ft_putnbr(a);
	ft_putchar(' ');
	ft_putnbr(b);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putstr(str3);
	printf("%p\n", &a);
	printf("%p\n", &b);
	ft_putstr(str2);
	return (EXIT_SUCCESS);
}
