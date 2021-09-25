/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:13:51 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/25 21:36:22 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		*str++;
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
