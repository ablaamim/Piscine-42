/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:18:16 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/11 22:23:17 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		index;

	index = 0;
	dup = malloc(sizeof (char) * (ft_strlen(src) + 1));
	if (dup == NULL)
		return (NULL);
	while (src[index])
	{
		dup[index] = src[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}

int	main(void)
{
	char	src[] = "DUPLICATE THIS OUT NIGGA !";

	printf("|%s|\n", ft_strdup(src));
	printf("|%s|\n", strdup(src));
	return (0);
}
