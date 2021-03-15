/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 05:18:08 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/23 06:07:26 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv, char **env)
{

	int i;

	i = 0;
	if (argc == 2)
	{
		ft_putchar('a');
	}
		else if (argc == 1)
		{
			while (*argv[i] != '\0')
			{
				if (*argv[i] == 'a')
			{
				ft_putchar('a');
			}
			i++;
			ft_putchar('\n');
			}
		}
		else
		{
			ft_putchar('a');
			ft_putchar('\n');
		}
	return (EXIT_SUCCESS);
}
