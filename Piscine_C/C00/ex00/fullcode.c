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
