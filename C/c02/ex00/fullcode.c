/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:18:37 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/27 23:24:43 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str++);
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	str[] = "-----------------------------------------\n";
	char	str1[] = "NULL TEST! NO DISPLAY IN STDOUT.\n";
	char	src1[] = "Copy me\n";
	char	dest1[256];
	char	src2[] = "";
	char	dest2[256];
	char	src3[] = "Future is loading\n";
	char	dest3[] = "\0";

	ft_strcpy(dest1, src1);
		ft_putstr(str);
	ft_putstr(dest1);
		ft_putstr(str);
	ft_strcpy(dest2, src2);
	ft_putstr(dest2);
		ft_putstr(str1);
		ft_putstr(str);
	ft_strcpy(dest3, src3);
	ft_putstr(dest3);
		ft_putstr(str);
	return (EXIT_SUCCESS);
}
