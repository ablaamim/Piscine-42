/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 05:49:37 by alaamimi          #+#    #+#             */
/*   Updated: 2021/04/26 06:03:18 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1, &(*str++), 1);
	}
}

char *ft_strlowcase(char *str)
{
	while(*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		*str++;
	}
	return (str);
}

int	main(void)
{
	/*TEST 1 :*/
	char	str[] = "qweRtY Aaaaaa yeS, LEET IS 1337!";
		write(1, "-----\n", 6);
	ft_putstr(str);
		write(1, "\n", 1);
	ft_strlowcase(str);
		write(1, "-----\n", 6);
	ft_putstr(str);
	write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 2 : */
	char	str1[] = "LEET!\n";
	ft_putstr(str1);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_strlowcase(str1);
	ft_putstr(str1);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	return (EXIT_SUCCESS);
}
