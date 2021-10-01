/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 07:44:34 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/01 07:48:31 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

char	*ft_strcpy(char *s1, char *s2)
{
	while (*s2)
	{
		*s1++ = *s2++;
	}
	*s1 = '\0';
	return (s1);
}

int	main(void)
{
	char	s1[256];
	char	s2[] = "Copy me!\n";

	ft_strcpy(s1, s2);
	ft_putstr(s1);
	return (0);
}
