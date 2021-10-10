/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:36:55 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/09 11:16:18 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	intarray_debug(int *tab, int size)
{
	int	index;

	index = 0;
	printf("[");
	while (index < size - 1)
	{
		printf("%d, ", tab[index]);
		index++;
	}
	printf("%d", tab[size - 1]);
	printf("]");
}

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	max -= min;
	tab = malloc(sizeof(int) * max);
	if (tab == NULL)
		return (NULL);
	i = -1;
	while (++i < max)
		tab[i] = min + i;
	return (tab);
}

int	main(void)
{
	intarray_debug(ft_range(10, 20), 20 - 10);
	printf("\n");
	return (0);
}
