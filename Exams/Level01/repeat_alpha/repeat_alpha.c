/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:37:24 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/01 13:42:44 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	else if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	return (1);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	int count;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			count = count_letter(argv[1][i]);
			while (count--)
			{
				write(1, &argv[1][i],1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
