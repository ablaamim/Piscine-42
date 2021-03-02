/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 20:24:26 by alaamimi          #+#    #+#             */
/*   Updated: 2021/01/17 10:19:52 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> /*Preprocessor directive, to include "write"*/
#include <stdlib.h> /*Preprocessor directive, to use EXIT_SUCCESS Function*/

void	ft_putchar(char c) /*void is the type of returned value*/
{
	write(1, &c, 1); /*System call, read man 2 write*/
}

int	main() /*Entry point of a c program*/
{
	ft_putchar('@'); /*Print an @ in the stdout*/
	ft_putchar(10); /*Print a newline*/
	return(EXIT_SUCCESS); /*End of instructions*/
}
/*This function prints characters in the stdout one by one following 
  ascii mapping, so in the main ft_putchar calls write to output chars*/
/*stdlib.h is a forbidden library, also EXIT_SUCCESS function*/
