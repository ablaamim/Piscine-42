/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 02:16:11 by alaamimi          #+#    #+#             */
/*   Updated: 2021/01/04 02:39:20 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char min;
	char maj;

	min = 97;
	maj = 66;
	while (min <= 121 && maj <= 90)
	{
		write(1, &min, 1);
		min = min + 2;
		write(1, &maj, 1);
		maj = maj + 2;
	}
	write(1, "\n", 1);
	return (0);
}
