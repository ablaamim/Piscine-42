/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:13:51 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/27 23:31:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	test0[] = "01234";
	char	test1[] = "Aaaaaa  a";
	char	test2[] = "aBcd";

	printf("---------------------------------------------\n");
	printf("%d\n", ft_str_is_alpha(test0));
	printf("---------------------------------------------\n");
	printf("%d\n", ft_str_is_alpha(test1));
	printf("---------------------------------------------\n");
	printf("%d\n", ft_str_is_alpha(test2));
	printf("---------------------------------------------\n");
	return (EXIT_SUCCESS);
}
