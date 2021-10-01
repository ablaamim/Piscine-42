/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:53:18 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/01 14:03:27 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	get_char(char j)
{
	char	c;

	c = j;
	if (c == 'z')
		c = 'a';
	else if (c == 'Z')
		c = 'A';
	else if ((j >= 'a' && j <= 'y') || (j >= 'A' && j <= 'Y'))
		c = j + 1;
	return (c);
}

int	main(int argc, char **argv)
{
	char	c;

	if (argc == 2)
	{
		while (*argv[1])
		{
			c = get_char(*argv[1]);
			write(1, &c, 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
