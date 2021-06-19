/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 00:15:49 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/20 00:15:55 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> /* Preprocessor directives */
/* This library is required to use the write function */

#include <stdlib.h> /*Forbiden library*/

void 	ft_putchar ( char c)			 /* Define a function to print a character */
{
	write ( 1 , & c, 1 );			/* Call the 'write' function (system call) by sending it as arguments
									** the standard output stream, which will be used to send a character to print there.
									** Next, we use the '&' operator so that we can take the address of the 'c' variable 
									** and send this to the 'write' function to print the contents of the variable it points to 
									** this address. 
									** In the last argument of the 'write' function, we indicate how many bytes to the right of the extracted 
									** we need to advance the addresses and how much data to count in order to send them to print via
									** standard output stream using its identifier (file descriptor) that we specified
									** in the first argument of the 'write' function */
}

void	ft_print_alphabet() /* Define a function to print alphabets in the stdout*/
{
	char ltr; /* Declare a variable to store a character inside */

	ltr = 97;		 /* Initialize the variable with the 'a' character ('ascii' character code 'a' - integer 97) */
	while (ltr <= 122)      /* Run a loop that will print the contents of the variable 'letter' and increment
									** after this 'ascii' character code to point to the character following it
									** in table 'ascii' */
	{
		ft_putchar(ltr);	/* call the function of printing the character by sending it the character 'a' (or rather, 'ascii'
									** character code 'a'), to print this character */

		ltr++;			/* Increase the number reflecting the 'ascii' character code to point to the character going
									** following it in the 'ascii' table */
	}
}

int	main(void)	 / * Define the main function from which the program will start * /
{
	ft_print_alphabet();	/ * Call the function for printing the alphabet. When calling a function in parentheses, we do not write anything,
									** leaving them empty because we remember that the function 'ft_print_alphabet' does not accept
									** arguments * /
	ft_putchar('\n');
	return (EXIT_SUCCESS); /*This is forbiden*/
}
