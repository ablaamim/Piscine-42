/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:25:21 by alaamimi          #+#    #+#             */
/*   Updated: 2021/03/02 16:30:25 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
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
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	if (nbr >= 0 && nbr < 10)
		ft_putchar(nbr + '0');
}

int	main(void)
{
	int *nbr;
	int n;

	n = 1;
	nbr = &n;
	ft_putnbr(n);
		ft_putchar('\n');
	ft_ft(nbr);
	ft_putnbr(n);
		ft_putchar('\n');
	return(EXIT_SUCCESS);
}
