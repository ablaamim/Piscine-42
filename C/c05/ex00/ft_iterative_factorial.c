/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root </var/mail/root>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:41:44 by root              #+#    #+#             */
/*   Updated: 2021/10/03 23:52:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0 )
		return (0);
	fact = 1;
	while (nb > 1)
		fact *= nb--;
	return (fact);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

int	main(void)
{
	ft_putnbr(ft_iterative_factorial(5));
	write(1, "\n", 1);
	return (0);
}
