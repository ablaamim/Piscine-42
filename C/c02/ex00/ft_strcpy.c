/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 09:39:37 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/26 17:46:42 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy( char *dest, char *src)
{
	if (dest == NULL || src == NULL)
		return (NULL);
	while (*dest)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
