/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:22:23 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/29 16:36:11 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_pustr(char *str)
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
	char str[] = "Mem address : \n\n";
	char str1[] = "nb = ";

	n = 1337;
	write(1, "---------------\n", 16);
	ft_pustr(str1);
	ft_putnbr(n);
	ft_putchar('\n');
	write(1, "---------------\n", 16);
	ft_ft(&n);
	printf("%d\n", n);
	write(1, "---------------\n", 16);
	ft_pustr(str);
	printf("%p\n", &n);
	write(1, "---------------\n", 16);
	return (EXIT_SUCCESS);
}
