/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 02:09:52 by alaamimi          #+#    #+#             */
/*   Updated: 2021/01/04 02:11:37 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char nbr;

	nbr = '0';
	while(nbr <= '9')
	{
		write(1, &nbr, 1);
		nbr++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return(0);
}
