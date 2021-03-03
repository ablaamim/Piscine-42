/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:01:53 by alaamimi          #+#    #+#             */
/*   Updated: 2021/03/03 19:02:03 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &(*str++), 1);
	}
}

int	main(void)
{
	char *str;

	str = "Future is loading, 1337!";
	ft_putstr(str);
	return(EXIT_SUCCESS);
}
