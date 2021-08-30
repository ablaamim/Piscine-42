/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:00:32 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/30 16:55:05 by alaamimi         ###   ########.fr       */
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

	nbr = (long) nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + 48);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;
	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

int	main(void)
{
	int		a;
	int		b;
	char	str[] = "-------------------------------\n";
	char	str0[] = "*a = ";
	char	str1[] = "*b = ";
	char	str2[] = "Memory adress : ";

	a = 10;
	b = 3;
		ft_putstr(str);
	ft_ultimate_div_mod(&a, &b);
		ft_putstr(str0);
	ft_putnbr(a);
		ft_putchar('\n');
		ft_putstr(str1);
	ft_putnbr(b);
		ft_putchar('\n');
		ft_putstr(str);
		ft_putstr(str2);
	printf("%p\n", &a);
		ft_putstr(str2);
	printf("%p\n", &b);
		ft_putstr(str2);
	return(EXIT_SUCCESS);
}
