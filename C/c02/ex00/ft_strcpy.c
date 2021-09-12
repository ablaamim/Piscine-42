/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 09:39:37 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/12 18:30:23 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy( char *dest, char *src)
{
	if ( dest == NULL)
		return (NULL);
	while (*dest)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
