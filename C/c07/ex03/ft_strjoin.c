/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:24:35 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/12 09:18:28 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
		j += ft_strlen(strs[i++]);
	if (size > 0)
		j += (size - 1) * ft_strlen(sep);
	dest = malloc((j + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(dest + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (++i < size)
			j += dest + j + ft_strlen(sep) - ft_strcpy(dest + j, sep);
	}
	dest[j] = '\0';
	return (dest);
}

int		main(void)
{
	char	*strs1[] = {"ROLL ME UP", " JOIN MEEEE", " NOW GET A LIGHTER!"};

	printf("%s\n", ft_strjoin(3, strs1, ","));
	return (0);
}
