/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 02:04:22 by alaamimi          #+#    #+#             */
/*   Updated: 2020/11/16 02:36:18 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1, &(*str++), 1);
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	while(*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
