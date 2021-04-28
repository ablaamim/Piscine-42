/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 02:46:33 by alaamimi          #+#    #+#             */
/*   Updated: 2021/04/28 05:16:17 by alaamimi         ###   ########.fr       */
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
	while (*str != '\0')
	{
		write(1, &(*str++),1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
}

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= ' ' && *str <= '~'))
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
	ft_str_is_printable(str);
	ft_putnbr(ft_str_is_printable(str));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 2 : */
	char	str1[] = "~{}~=!!?";
	ft_putstr(str1);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_str_is_printable(str1);
	ft_putnbr(ft_str_is_printable(str1));
		write(1, "\n", 1);
		write(1,"-----\n", 6);
	/*TEST 3 :*/
	char	str2[] = " <\n\t";
	ft_putstr(str2);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_str_is_printable(str2);
	ft_putnbr(ft_str_is_printable(str2));
	write(1, "\n", 1);
	write(1, "-----\n", 6);
	return (EXIT_SUCCESS);
}
