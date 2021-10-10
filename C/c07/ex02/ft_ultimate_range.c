/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:22:49 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/10 16:37:25 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	intarray_debug(int *tab, int size)
{
	int	i;

	i = 0;
	printf("[");
	while (i < size - 1)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("%d", tab[size - 1]);
	printf("]");
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	max -= min;
	*range = malloc(max * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = -1;
	while (++i < max)
		(*range)[i] = min + i;
	return (max);
}

int	main(void)
{
	int	*tab;

	intarray_debug(tab, ft_ultimate_range(&tab, 10, 20));
	printf("\n");
	return (0);
}
