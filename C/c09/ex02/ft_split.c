/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:57:59 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/13 18:12:59 by ablaamim         ###   ########.fr       */
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
	while (*str)
		ft_putchar(*str++);
}

int	ft_is_separator(char *str, char *charset)
{
	while (*charset)
		if (*str == *charset++)
			return (1);
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_separator(str + i, charset))
		i++;
	return (i);
}

int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	w;

	w = 0;
	while (*str)
	{
		while (*str && ft_is_separator(str, charset))
			str++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
			w++;
	}
	return (w);
}

char	*ft_wordcpy(char *src, int n)
{
	char	*dest;

	dest = malloc((n + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[n] = '\0';
	while (n--)
		dest[n] = src[n];
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**t;
	int		size;
	int		i;
	int		n;

	size = ft_wordcount(str, charset);
	t = malloc((size + 1) * sizeof(char *));
	if (!t)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (*str && ft_is_separator(str, charset))
			str++;
		n = ft_wordlen(str, charset);
		t[i] = ft_wordcpy(str, n);
		if (!t[i])
			return (NULL);
		str += n;
	}
	t[size] = 0;
	return (t);
}

int	main(void)
{
	char 	**arr_str;					/*Declare a pointer to a pointer into which we will save the address of the array with the addresses of the strings */

	if ((arr_str = ft_split ( "_hello$my$##cool=friend!+","!_=$+#@")) == (( void *) 0 )) /*Runs the function of finding in the string
										** separate words and scatter them on separate lines*/
		return (0);
	while (*arr_str != ((void *) 0))		 /*Check if there is a string at this address. If there is, then go down below and print its symbols*/
	{
		ft_putstr (* arr_str);			/*Print the current line*/
		ft_putchar ('\n');				/*After, we print the newline character */
		arr_str ++;						/*Go to the next cell storing the address of another line*/
	}
	return (0);							/*If you get to here, then the main function ends, zero is returned and the program ends*/
}
