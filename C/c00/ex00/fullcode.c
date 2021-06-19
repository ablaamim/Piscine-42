/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 23:14:11 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/19 23:38:25 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h> 				/* This library is required to use the write function */

void 	ft_putchar ( char c)		 /* Define the function itself, describing its body, in which we call the 'write' function
									** to print the character received in the variable 'c' (function argument) */
{
	write ( 1 , & c, 1 );		 /* Call the 'write' function (system call) by sending it as arguments
								** the standard output stream, which will be used to send a character to print there.
								** Next, we use the '&' operator so that we can take the address of the 'c' variable 
								** and send this to the 'write' function to print the contents of the variable it points to 
								** this address. 
								** In the last argument of the 'write' function, we indicate how many bytes to the right of the extracted 
								** we need to advance the addresses and how much data to count in order to send them to print via
								** standard output stream using its identifier (file descriptor) that we specified
								** in the first argument of the 'write' function */
}

/************************************************ ********************************************* ***********************************************/
/* *********************************************** ********************************************* **********************************************/

/** The write function has the following parameters:
** write (<stream descriptor>, <& pointer to buffer>, <number of bytes to write>):
**
**
** 1/. int <handle (identifier) ​​of the input / output stream>:
** 0 - stdin, standard input device (keyboard);
** 1 - stdout, standard output device (screen);
** 2 - stderr, standard error message output device (also screen).
** In simple words. When the file is opened, the operating system creates an entry for
** views of this file and saves information about this opened file. 
** So, if your OS has 100 files open, then the OS will have 100 
** records (somewhere in the kernel). These records are represented by integers such
** like (... 100, 101, 102 ....). This record number is a file descriptor.
** So it is just an integer that uniquely represents
** is an open file in the operating system. If your process will open
** 10 files, your process table will contain 10 records for 
** file descriptors. In simpler words: to get to the city
** (read / write to file) we are driving across the bridge (handle).
**
**
** 2/. const void * buf <pointer to buffer> - the address where we will write our data (bytes) and return them.
** Value from ft_putchar (char c (from here)) passing it to the write function (1, & c (here), 1).
** The syntax when we link to an address is from -> & c.
**
**
** 3/. size_t count <number of bytes to be written> - the amount of data transferred (1 byte - 1 char).
** This function writes one character to the standard output of the terminal.
**
** *********************************************** ******************************************* *****************************************************************************/
/* *********************************************** ******************************************* *****************************************************************************/



int	main (void)				 /* Define the main function from which the program will start executing.
								** 'void' in the arguments of the main function means that this function does not accept
								** nothing in the arguments. 'int' at the beginning of the function means that the function before
								** completion returns an integer */
{
	ft_putchar (':');			/* Call the 'ft_putchar' function we created for testing several times. */
	ft_putchar (')');
	ft_putchar ('\n');
	return (0);					/* The function uses the 'return' operator to return the result. In this case, it returns zero.
								** Here it is needed for debugging - to show that if the function returned 0 after work, then it has reached the end,
								** which means that everything went smoothly */
}
