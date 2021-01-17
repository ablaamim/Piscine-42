/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 20:25:22 by alaamimi          #+#    #+#             */
/*   Updated: 2021/01/17 10:22:59 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> /*Preprocessor Directives*/
#include <stdlib.h>

void	ft_putchar(char c) /*Function that uses write() to print chars*/
{
	write(1, &c, 1); /*System call*/
}

void	ft_print_alphabet() /*Function to print alphabets in the stdout*/
{
	char ltr;

	ltr = 97;
	while (ltr <= 122)
	{
		ft_putchar(ltr);
		ltr++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	ft_putchar(10);
	return (EXIT_SUCCESS);
}
