/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 08:17:19 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/04 08:29:41 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int sqrt;

	if (nb == 1)
		return (1);
	sqrt = 2;
	while ((sqrt * sqrt) <= nb && sqrt <= 46340)
	{
		if ((sqrt * sqrt) == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
