/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:15:34 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/09 23:21:26 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	char	str[] = "DISPLAY ME SENPAI!";

	a = 42;
	b = 1337;
	printf("%d %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
	ft_putstr(str);
	printf("\n%d\n", ft_strlen(str));
	return (0);
}
