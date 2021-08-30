/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:12:49 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/30 17:57:11 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
	if (nbr > 9 )
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + 48);
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
	char	str[] = "-------------------------\n";
	char	str0[] = "0123456789";
	char	str1[] = "\0";
	char	str2[] = "aaaaAAA!";
	char	str3[] = "";
	char	str4[] = "\t\a\n";

		ft_putstr(str);
	ft_putnbr(ft_strlen(str0));
		ft_putchar('\n');
		ft_putstr(str);
	ft_putnbr(ft_strlen(str1));
		ft_putchar('\n');
		ft_putstr(str);
	ft_putnbr(ft_strlen(str2));
		ft_putchar('\n');
		ft_putstr(str);
	ft_putnbr(ft_strlen(str3));
		ft_putchar('\n');
		ft_putstr(str);
	ft_putnbr(ft_strlen(str4));
		ft_putchar('\n');
		ft_putstr(str);
	return (EXIT_SUCCESS);
}
