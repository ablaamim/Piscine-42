/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 22:24:44 by alaamimi          #+#    #+#             */
/*   Updated: 2021/04/25 22:46:51 by alaamimi         ###   ########.fr       */
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
	while(*str != '\0')
		write(1, &(*str++), 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
}
int ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		*str++;
	}
	return (1);
}

int	main(void)
{
	/*TEST 1 : */
	char	str[] = "";
		write(1, "-----\n", 6);
	ft_putstr(str);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_str_is_numeric(str);
	ft_putnbr(ft_str_is_numeric(str));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 2 : */
	char	str1[] = "0bcd11";
	ft_putstr(str1);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_str_is_numeric(str1);
	ft_putnbr(ft_str_is_numeric(str1));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 3 :*/
	char	str2[] = "1234";
	ft_putstr(str2);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_str_is_numeric(str2);
	ft_putnbr(ft_str_is_numeric(str2));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	return (EXIT_SUCCESS);
}
