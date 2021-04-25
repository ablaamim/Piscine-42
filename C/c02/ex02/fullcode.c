/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:13:51 by alaamimi          #+#    #+#             */
/*   Updated: 2021/04/25 20:57:21 by alaamimi         ###   ########.fr       */
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
	{
		ft_putchar(*str);
		*str++;
	}
}

void	ft_putnbr(int nb)
{
	if(nb >= 0 && nb < 10)
		ft_putchar(nb + 48);
}

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		*str++;
	}
	return (1);
}

int	main(void)
{
	/*TEST 1 :*/
	char	str[] = "";
		write(1, "-----\n", 6);
	ft_putstr(str);
		write(1, "\n", 1);
	ft_str_is_alpha(str);
		write(1, "-----\n", 6);
		write(1, "Return : ", 9);
	ft_putnbr(ft_str_is_alpha(str));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 2 :*/
	char str1[] = "123";
	ft_putstr(str1);
		write(1, "\n", 1);
	ft_str_is_alpha(str1);
		write(1, "-----\n", 6);
		write(1, "Return : ",9);
	ft_putnbr(ft_str_is_alpha(str1));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 3 :*/
	char	str2[] = "abcDEF";
	ft_putstr(str2);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_str_is_alpha(str2);
	write(1, "Return :", 9);
	ft_putnbr(ft_str_is_alpha(str2));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	return (EXIT_SUCCESS);
}
