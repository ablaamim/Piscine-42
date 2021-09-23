/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 06:33:04 by ablaamim          #+#    #+#             */
/*   Updated: 2021/09/23 06:42:45 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	max[9];
	char	num[9];
	int		counter;

	counter = -1;
	while (++counter < n)
	{
		max[counter] = 57 - (n - 1) + counter;
		num[counter] = 48 + counter;
	}
	write(1, num, --counter + 1);
	while (counter >= 0)
	{
		if (num[counter] == max[counter])
			--counter;
		else if (++counter != n)
			num[counter] = num[counter - 1];
		else
			--counter;
		if (++num[counter] == max[counter] || counter == n  - 1)
		{
			write(1, ", ", 2);
			write(1, num, n);
		}
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
