/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:33:14 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/17 20:29:19 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	g_buffer[10];
int		g_length;

void	record(int previous, int n)
{
	int		i;

	if (n == g_length)
	{
		write(1, g_buffer, g_length);
		write(1, ", ", 2);
		return ;
	}
	if (previous == 9)
		return ;
	i = previous;
	while (++i <= 10 - g_length + n)
	{
		g_buffer[n] = '0' + i;
		record(i, n + 1);
	}
}

void	last_value(int i)
{
	char	c;

	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	g_length = n;
	while (i < 10 - n)
	{
		g_buffer[0] = '0' + i;
		record(i++, 1);
	}
	last_value(i);
}

int	main(void)
{
	ft_print_combn(9);
	return (EXIT_SUCCESS);
}
