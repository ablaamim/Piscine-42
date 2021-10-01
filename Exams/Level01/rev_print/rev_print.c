/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:48:57 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/01 13:51:52 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int len;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		while (len--)
		{
			write(1, &argv[1][len], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
