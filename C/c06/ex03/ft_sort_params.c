/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:14:17 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/03 09:25:21 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*charptr;

	charptr = str;
	while (*charptr != '\0')
	{
		write(1, charptr,1);
		charptr++;
	}
	write(1, "\n", 1);
	return ;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] && s2[n] && s1[n] == s2[n])
		n++;
	return (s1[n] - s2[n]);
}

void	ft_sort_tab(char *tab[], int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	int	n;

	n = 1;
	ft_sort_tab(argv, argc);
		while (n <= argc - 1)
			ft_putstr(argv[n++]);
	return (0);
}
