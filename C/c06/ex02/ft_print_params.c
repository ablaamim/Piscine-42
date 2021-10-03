/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 07:35:11 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/03 07:41:48 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	return ;
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > i)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
