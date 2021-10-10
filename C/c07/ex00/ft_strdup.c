/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:18:16 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/09 10:30:06 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
	if (src == NULL)
		return (NULL);
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
	return (0);
}
