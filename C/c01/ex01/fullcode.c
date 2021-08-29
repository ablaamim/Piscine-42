/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:59:32 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/29 18:30:52 by alaamimi         ###   ########.fr       */
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

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int		n;
	int		*ptr;
	int		**ptr2;
	int		***ptr3;
	int		****ptr4;
	int		*****ptr5;
	int		******ptr6;
	int		*******ptr7;
	int		********ptr8;
	int		*********ptr9;
	char	str[] = "-----------------------------------------------------------\n";
	char	str1[] = "Memory adress of nb : ";
	char	str2[] = "The value of nb after calling ft_ultimate_ft function : ";

	n = 0;
	ptr = &n;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	ft_putstr(str);
		write(1, "n = ", 4);
	ft_putnbr(n);
		ft_putchar('\n');
		ft_putstr(str);
	ft_ultimate_ft(ptr9);
		ft_putstr(str2);
	ft_putnbr(n);
		ft_putchar('\n');
		ft_putstr(str);
		ft_putstr(str1);
	printf("%p\n", &n);
		ft_putstr(str);
	return(EXIT_SUCCESS);
}
