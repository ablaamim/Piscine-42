/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:16:17 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/24 19:16:28 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers()
{
	char nbr;

	nbr = '0';
	while(nbr <= '9')
	{
		ft_putchar(nbr);
		nbr++;
	}
}

int	main(void)
{
	ft_print_numbers();
		ft_putchar('\n');
	return(EXIT_SUCCESS);
}
