/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 10:31:43 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/01 10:37:52 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	long	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 7 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		res = res * 10 + *str - 48;
		str++;
	}
	return (sign * (int)res);
}


int	main(void)
{
	char	str[] = "\n   \t\t\n\v -42Ohyes! its a lol!";

	printf("%d\n", ft_atoi(str));
	return (0);
}
