/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root </var/mail/root>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 11:18:13 by root              #+#    #+#             */
/*   Updated: 2021/09/26 11:22:28 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int begin_word;

	i = 0;
	begin_word = 1;
	while (str[i])
	{
		if (is_alphanumeric(str[i]))
		{
			if (begin_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!begin_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			begin_word = 0;
		}
		else
			begin_word = 1;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "Aaaaa aaaaa 42 is cool!";

	ft_strcapitalize(str);
	printf("%s\n", str);
}
