/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 05:12:07 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/26 11:16:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	while (*str++)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
	}
	return (str);
}
