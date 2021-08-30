/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:01:53 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/30 17:15:38 by alaamimi         ###   ########.fr       */
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

int	main(void)
{
	char	str[] = "-----------------------------\n";
	char	str0[] = "Future is loading\n";
	char	str1[] = "";
	char	str2[] = "0123456789\0aaaa";
	char	str3[] = "ABCDabcd####123@!\0!!!!!";

		ft_putstr(str);
	ft_putstr(str0);
		ft_putstr(str);
	ft_putstr(str1);
		ft_putchar('\n');
		ft_putstr(str);
	ft_putstr(str2);
		ft_putchar('\n');
			ft_putstr(str);
	ft_putstr(str3);
		ft_putchar('\n');
		ft_putstr(str);
	return(EXIT_SUCCESS);
}
