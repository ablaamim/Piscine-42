/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:18:37 by alaamimi          #+#    #+#             */
/*   Updated: 2021/04/22 00:37:39 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int cmp;

	cmp = 0;
	while(str[cmp] != '\0')
	{
		ft_putchar(str[cmp]);
		cmp++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int cmp;

	cmp = 0;
	while(src[cmp] != '\0')
	{
		dest[cmp] = src[cmp];
		cmp++;
	}
	dest[cmp] = '\0';
	return(dest);
}

int	main(void)
{
	char src[] = "testing\n";
	char dest[] = "qq   qqqq\n";
		write(1, "-----\n", 6);
		write(1, "Destination string is : ", 24);
	ft_putstr(dest);
		write(1, "-----\n", 6);
	ft_strcpy(dest, src);
		write(1, "The result is : ", 16);
	ft_putstr(dest);
		write(1, "-----\n", 6);
	char src1[] = "";
	char dest1[] = "42";
		write(1, "Destination string is : ", 24);
	ft_putstr(dest1);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_strcpy(dest1, src1);
		write(1, "The result is : ", 16);
	ft_putstr(dest1);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	return (EXIT_SUCCESS);
}
