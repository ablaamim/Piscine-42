/*-----------------------------------------------------
-                               __                    -
-                             .d$$b                   -
-                           .' TO$;\                  -
-                          /  : TP._;                 -
-                         / _.;  :Tb|                 -
-                        /   /   ;j$j                 -
-                    _.-"       d$$$$                 -
-                  .' ..       d$$$$;                 -
-                 /  /P'      d$$$$P. |\              -
-                /   "      .d$$$P' |\^"l             -
-              .'           `T$P^"""""  :             -
-          ._.'      _.'                ;             -
-       `-.-".-'-' ._.       _.-"    .-"              -
-     `.-" _____  ._              .-"                 -
-    -(.g$$$$$$$b.              .'                    -
-      ""^^T$$$P^)            .(:                     -
-        _/  -"  /.'         /:/;                     -
-     ._.'-'`-'  ")/         /;/;                     -
------------------------------------------------------*/
/* Preprocessor directives && libraries*/
#include <unistd.h>
#include <stdlib.h> /* Forbiden lib :D */
/* Print a character on the standard output using write function*/
void	ft_putchar(char c)
{
	write(1 , &c, 1); /* write to a file descriptor, consult man 2 write*/
	/* First parameter is a FD*/
	/* Second paramater is a buff*/
	/* Third parameter is bitesize*/
}
/* Prototyping a function to print alphabets on the stdout from a to z */
void	ft_print_alphabet(void)
{
	char alph; /* Declaration*/

	alph = 97; /* Assignment of a starting value*/
	while(alph <= 122) /* Loop with a final value instruction to stop it*/
	{
		ft_putchar(alph);
		alph++; /* Increment the value of alph till it last value*/
	}
}
/* Main program, first to be pushed on the stack*/
int	main(int argc, char **argv)
{
	(void)argc; /*Number of arguments*/
	(void)argv; /*arguments*/
	ft_print_alphabet(); /*Function call*/
	ft_putchar('\n'); /*Add a new line*/
	return (EXIT_SUCCESS); /* End of instructions, better use 0, this is a
	forbiden function */
}
