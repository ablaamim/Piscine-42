/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:12:49 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/30 17:40:34 by alaamimi         ###   ########.fr       */
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
	long nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr > 9 )
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	if (nbr >=0 && nbr < 10)
		ft_putchar(nbr + 48);
}

int	ft_strlen(char *str)
{
	int cpt;

	cpt = 0;
	while(*str++)
	{
		cpt++;
	}
	return(cpt);
}

int	main(void)
{
	char *str;

	str = "AA123456789"; /* len = 11 */
	write(1, "-----\n", 6);
		write(1, "len = ", 6);
	ft_putnbr(ft_strlen(str));
		write(1, "\n", 1);
	write(1, "-----\n", 6);
	char *str1;

	str1 = "";
	write(1,"len = ",6);
	ft_putnbr(ft_strlen(str1));
		write(1, "\n", 1);
	write(1, "-----\n", 6);
	char *str2;

	str2 = "\t\n 42";
	write(1,"len = ",6);
	ft_putnbr(ft_strlen(str2));
		write(1, "\n", 1);
	write(1, "-----\n", 6);
	return(EXIT_SUCCESS);
}
