/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 21:35:17 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/29 19:34:15 by alaamimi         ###   ########.fr       */
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
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
		ft_putchar(nbr % 10 + 48);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;
	char	str[] = "------------------------------------------\n";
	char	str2[] = "Memory adress : ";
	char	str3[] = "Div = ";
	char	str4[] = "Mod = ";
	char	str5[] = "a = ";
	char	str6[] = "b = ";

	a = 42;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
		ft_putstr(str);
		ft_putstr(str5);
	ft_putnbr(a);
		ft_putchar('\n');
		ft_putstr(str6);
	ft_putnbr(b);
		ft_putchar('\n');
		ft_putstr(str);
		ft_putstr(str3);
	ft_putnbr(div);
		ft_putchar('\n');
		ft_putstr(str4);
	ft_putnbr(mod);
		ft_putchar('\n');
	ft_putstr(str);
		ft_putstr(str2);
	printf("%p\n", &a);
		ft_putstr(str2);
	printf("%p\n", &b);
		ft_putstr(str2);
	printf("%p\n", &div);
		ft_putstr(str2);
	printf("%p\n", &mod);
		ft_putstr(str);
	return(EXIT_SUCCESS);
}
