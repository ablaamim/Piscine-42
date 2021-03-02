/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:08:08 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/24 19:21:40 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

int	main()
{
	write(1, "-----\n", 6);
	ft_is_negative(42);
		ft_putchar('\n');
	write(1, "-----\n", 6);
	ft_is_negative(-42);
		ft_putchar('\n');
	write(1, "-----\n", 6);
	return(EXIT_SUCCESS);
}
