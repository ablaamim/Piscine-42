/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 21:13:38 by ablaamim          #+#    #+#             */
/*   Updated: 2021/09/30 21:17:29 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	upper;
	char	lower;

	lower = 'z';
	upper = 'Y';
	while (lower >= 'b' && upper >= 'A')
	{
		write(1, &lower, 1);
		lower = lower - 2;
		write(1, &upper, 1);
		upper = upper - 2;
	}
	write(1, "\n", 1);
	return (0);
}
