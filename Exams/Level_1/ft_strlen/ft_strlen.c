/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:39:56 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/10 18:48:18 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

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

	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr + 48);
}

int	ft_strlen(char *str)
{
	int index;

	index = 0;
	while (*str++)
	{
		index++;
	}
	return (index);
}

int	main(void)
{
	char	str[] = "1234\n";

	ft_putstr(str);
	ft_putnbr(ft_strlen(str));
	write(1, "\n", 1);
	ft_putnbr(strlen(str));
	write(1, "\n", 1);
	return (EXIT_SUCCESS);
}
