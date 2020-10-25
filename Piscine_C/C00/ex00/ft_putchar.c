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

/*void because the function does not return any value, char is the type of the
 declared variable c*/
void	ft_putchar(char c)
{
	write(1, &c, 1); /*System call, read man 2 write*/
}

int	main()
{
	ft_putchar('@');
	ft_putchar(12); /*Print a newline*/
	return(EXIT_SUCCESS); /*End of instructions*/
}
