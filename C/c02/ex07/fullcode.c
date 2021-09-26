/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 05:13:08 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/26 15:36:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*str++),1);
}

char *ft_strupcase(char *str)
{
	while (*str)
	{
		if(*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (str);
}

int	main(void)
{
	/*TEST 1 : */
	char	str[] = "abcd";
		write(1, "-----\n", 6);
	ft_putstr(str);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_strupcase(str);
	ft_putstr(str);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 2 : */
	char	str1[] = "qWerTY aaaa, LEET is 1337!";
		write(1, "-----\n", 6);
	ft_putstr(str1);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_strupcase(str1);
	ft_putstr(str1);
		write(1, "\n", 1);
		write(1, "-----\n", 6);	
	return (EXIT_SUCCESS);
}
