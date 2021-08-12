/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:51:28 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/10 18:57:14 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int index;

	index = 0;
	while (*str++)
	{
		index++;
	}
}

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
	char	str[] = "reverse me\n";
	int	index;
	int len;
	int tmp;

	index = 0;
	len = ft_strlen(str);
	while (index < len - 1)
	{
		tmp = str[index];
		str[index] = str[len - 1];
		str[len - 1] = tmp;
	}
	ft_putstr(str);
}
