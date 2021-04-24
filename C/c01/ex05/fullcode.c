/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:01:53 by alaamimi          #+#    #+#             */
/*   Updated: 2021/04/15 21:11:45 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char *str;

	str = "Future is loading, 1337!";
	write(1,"-----\n", 6);
	ft_putstr(str);
		write(1, "\n", 1);
	write(1, "-----\n",6);
	ft_putstr(str);
		write(1, "\n",1);
	ft_putstr(str);
		write(1, "\n", 1);
	ft_putstr(str);
		write(1, "\n", 1);
	write(1, "-----\n", 6);
	str="";
	write(1,"should be empty :", 17);
	ft_putstr(str);
	write(1, "\n", 1);
	write(1, "-----\n", 6);
	return(EXIT_SUCCESS);
}
