/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:18:37 by alaamimi          #+#    #+#             */
/*   Updated: 2021/04/23 02:18:44 by alaamimi         ###   ########.fr       */
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
	while(*str != '\0')
	{
		ft_putchar(*str++);
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	while(*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return(dest);
}

int	main(void)
{
	char src[] = "testing\n";
	char dest[] = "qq   qqqq\n";
		write(1, "-----\n", 6);
		write(1, "Destination string is : ", 24);
	ft_putstr(dest);
		write(1, "-----\n", 6);
	ft_strcpy(dest, src);
		write(1, "The result is : ", 16);
	ft_putstr(dest);
		write(1, "-----\n", 6);
	char src1[] = "";
	char dest1[] = "42";
		write(1, "Destination string is : ", 24);
	ft_putstr(dest1);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_strcpy(dest1, src1);
		write(1, "The result is : ", 16);
	ft_putstr(dest1);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	return (EXIT_SUCCESS);
}
