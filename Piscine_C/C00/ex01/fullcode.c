/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 20:25:22 by alaamimi          #+#    #+#             */
/*   Updated: 2021/01/02 20:25:33 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet()
{
	char ltr;

	ltr = 96;
	while (ltr++ < 122)
	{
		ft_putchar(ltr);
	}
}

int	main(void)
{
	ft_print_alphabet();
	ft_putchar(10);
	return (EXIT_SUCCESS);
}
