/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:28:35 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/12 18:10:24 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	cmp1;
	int	cmp2;
	int	tmp;

	cmp1 = 0;
	while (cmp1 < size)
	{
		cmp2 = cmp1 + 1;
		while (cmp2 < size)
		{
			if (tab[cmp2] < tab[cmp1])
			{
				tmp = tab[cmp1];
				tab[cmp1] = tab[cmp2];
				tab[cmp2] = tmp;
			}
			cmp2++;
		}
		cmp1++;
	}
}
