/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 19:35:26 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/25 21:19:09 by ablaamim         ###   ########.fr       */
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
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	dest[256];
	char	src[]= "Text1.txt\n";
	char	str0[] = "----------------------------------------------\n";
	unsigned int	n;

	n = 5;
	ft_putstr(str0);
	ft_strncpy(dest, src, n);
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putstr(str0);
	return (EXIT_SUCCESS);
}
