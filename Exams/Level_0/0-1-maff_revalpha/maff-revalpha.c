/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff-revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 03:07:36 by alaamimi          #+#    #+#             */
/*   Updated: 2021/01/04 03:18:00 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char min;
	char maj;

	min = 122;
	maj = 89;
	while(min >= 96 && maj >= 65)
	{
		write(1, &min, 1);
		min = min - 2;
		write(1, &maj, 1);
		maj = maj - 2;
	}
	write(1, "\n", 1);
	return (0);
}
