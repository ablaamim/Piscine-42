/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 19:35:26 by alaamimi          #+#    #+#             */
/*   Updated: 2021/04/23 02:24:45 by alaamimi         ###   ########.fr       */
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
		ft_putchar(*str++);
	}
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	while(n-- && ((*dest++ = *src++) != '\0'));
}

int	main(void)
{
	char dest[] = "";
	char src[]= "Text1.txt\n";
	unsigned int n;

	n = 10;
	write(1, "-----\n", 6);
	ft_putstr(src);
	write(1, "\n", 1);
	write(1, "-----\n", 6);
	ft_strncpy(dest, src, n);
	ft_putstr(dest);
	write(1, "\n", 1);
	write(1, "-----\n", 6);
	return(EXIT_SUCCESS);
}
