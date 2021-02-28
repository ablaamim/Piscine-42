/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 19:53:35 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/28 22:01:14 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int nbr;

	nbr = nb;
	if(nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if(nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	if (nbr >= 0 && nbr < 10) 
		ft_putchar(nbr + '0');
}

int	main(void)
{
	write(1, "-----\n", 6);
	ft_putnbr(42);
		ft_putchar('\n');
	write(1, "-----\n", 6);
	ft_putnbr(-42);
		ft_putchar('\n');
	write(1, "-----\n", 6);
	ft_putnbr(0);
		ft_putchar('\n');
	write(1, "-----\n", 6);
	ft_putnbr(2147483647);
		ft_putchar('\n');
	write(1, "-----\n", 6);
	ft_putnbr(-2147483648);
		ft_putchar('\n');
	return(EXIT_SUCCESS);
}
