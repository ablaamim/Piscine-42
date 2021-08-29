/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:22:23 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/29 18:17:54 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str++, 1);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
}

void	ft_ft(int *nb)
{
	*nb = 42;
}

int	main(void)
{
	int n;
	char str[] = "Memory address if nb : ";
	char str1[] = "nb = ";
	char str2[] = "--------------------------------------------------\n";
	char str3[] = "Value of nb after calling ft_ft function : ";

	n = 1337;
		ft_putstr(str2);
	ft_putstr(str1);
	ft_putnbr(n);
	ft_putchar('\n');
		ft_putstr(str2);
	ft_ft(&n);
		ft_putstr(str3);
	printf("%d\n", n);
		ft_putstr(str2);
	ft_putstr(str);
	printf("%p\n", &n);
		ft_putstr(str2);
	return (EXIT_SUCCESS);
}
