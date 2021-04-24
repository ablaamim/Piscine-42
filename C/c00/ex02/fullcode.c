/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:09:52 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/24 19:11:17 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char ltr;

	ltr = 'z';
	while(ltr >= 'a')
	{
		ft_putchar(ltr);
		ltr--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
		ft_putchar('\n');
	return(EXIT_SUCCESS);
}
