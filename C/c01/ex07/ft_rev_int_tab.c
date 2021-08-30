/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:52:37 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/30 18:57:10 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cmt;
	int	swap;

	cmt = 0;
	while (cmt <= size - 1)
	{
		swap = tab[cmt];
		tab[cmt] = tab[size - 1];
		tab[size - 1] = swap;
		cmt++;
		size--;
	}
}
